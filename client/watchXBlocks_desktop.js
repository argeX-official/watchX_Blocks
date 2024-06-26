const { ipcRenderer, webFrame } = require("electron");
const winston = require("winston");
const util = require("util");

ipcRenderer.on('device-connect', (event, args) => {
	const { curr_usb_state } = args;
	watchXBlocks.setupColorEx(document, '#usb-connected', curr_usb_state ? '#7de224': '#ff4646');
	console.log("exported ...:"); // event.sender.send
});
ipcRenderer.on("upload-hex-res", (event, args) => {
	watchXBlocks.firmwareUploadResult(args);
	console.timeEnd("upload-hex-res");
});
ipcRenderer.on("code-res", (event, args) => {
	watchXBlocks.sendCodeReturn(args);
	console.timeEnd("code-res");
});
ipcRenderer.on("get-settings-res", (event, args) => {
	console.timeEnd("get-settings-res");
});
ipcRenderer.on("set-settings-res", (event, args) => {
	if(args.settings_type == "compiler") {
		watchXBlocks.setCompilerLocationHtml( watchXBlocks.jsonToHtmlTextInput(args) );
	} else if(args.settings_type == "sketch") {
		watchXBlocks.setSketchLocationHtml( watchXBlocks.jsonToHtmlTextInput(args) );
	} else if(args.settings_type == "serial") {
		watchXBlocks.setSerialPortsHtml(watchXBlocks.jsonToHtmlDropdown(args));
	} else if(args.settings_type == "board") {
		watchXBlocks.setArduinoBoardsHtml(watchXBlocks.jsonToHtmlDropdown(args));
	} else if(args.settings_type == "lang") {
		watchXBlocks.setLanguageHtml(watchXBlocks.jsonToHtmlDropdown(args));
	} else {
		watchXBlocks.openNotConnectedModal();
	}
	console.timeEnd("set-settings-res");
});
ipcRenderer.on("all-settings-res", (event, args) => {
	for(var opts of args.settings) {
		if(opts.settings_type == "compiler") {
			watchXBlocks.setCompilerLocationHtml( watchXBlocks.jsonToHtmlTextInput(opts) );
		} else if(opts.settings_type == "sketch") {
			watchXBlocks.setSketchLocationHtml( watchXBlocks.jsonToHtmlTextInput(opts) );
		} else if(opts.settings_type == "board") {
			watchXBlocks.setArduinoBoardsHtml( watchXBlocks.jsonToHtmlDropdown(opts) );
		} else if(opts.settings_type == "serial") {
			watchXBlocks.setSerialPortsHtml( watchXBlocks.jsonToHtmlDropdown(opts) );
		} else if(opts.settings_type == "lang") {
			watchXBlocks.setLanguageHtml(watchXBlocks.jsonToHtmlDropdown(opts));
		}
	}
	watchXBlocks.openSettingsReturn();
	console.timeEnd("all-settings-res");
});

var watchXBlocksImpl = {};

/** Wraps the console.log warn and errors to send data to logging file. */
watchXBlocksImpl.redirectConsoleLogging = function() {
	var consoleLog = console.log;
	var consoleWarning = console.warn;
	var consoleError = console.error;

	// This is magic from Stack Overflow
	// http://stackoverflow.com/questions/14172455/get-name-and-line-of-calling-function-in-node-js
	Object.defineProperty(global, '__stack', {
		get: function() {
			var orig = Error.prepareStackTrace;
			Error.prepareStackTrace = function(_, stack) {
				return stack;
			};
			var err = new Error;
			Error.captureStackTrace(err, arguments.callee);
			var stack = err.stack;
			Error.prepareStackTrace = orig;
			return stack;
		}
	});
	Object.defineProperty(global, '__stackfilename', {
		get: function() {
			return __stack[2].getFileName();
		}
	});
	Object.defineProperty(global, '__line', {
		get: function() {
			return __stack[2].getLineNumber();
		}
	});
	Object.defineProperty(global, '__function', {
		get: function() {
			return __stack[2].getFunctionName();
		}
	});

	// Wrapping console logging
	console.log = function() {
		consoleLog.apply(console, arguments);
		var tagRenderer = '[Renderer "' + __stackfilename + ':' + __function + '():L' + __line + '"] ';
		winston.info(tagRenderer + util.inspect(arguments));
	};
	console.warning = function() {
		consoleWarning.apply(console, arguments);
		var tagRenderer = '[Renderer "' + __stackfilename + ':' + __function + '():L' + __line + '"] ';
		winston.info(tagRenderer + util.inspect(arguments));
	};
	console.error = function() {
		consoleError.apply(console, arguments);
		var tagRenderer = '[Renderer "' + __stackfilename + ':' + __function + '():L' + __line + '"] ';
		winston.info(tagRenderer + util.inspect(arguments));
	};
};

watchXBlocksImpl.sendSync = function(event, args) {
	console.time(event);
	var result = ipcRenderer.sendSync(event, args);
	console.timeEnd(event);
	return result;
};

watchXBlocksImpl.sendAsync = function(event, args) {
	console.time(event + "-res");
	ipcRenderer.send(event, args);
};


watchXBlocksImpl.setupVersion = function() {
	var result = ipcRenderer.sendSync('get-version', { });
	watchXBlocks.setTextEx(document, '#watchx_version', result);
};

/** Initialize watchXBlocks code required for Electron on page load. */
window.addEventListener('DOMContentLoaded', event => {
	watchXBlocks.sendSync = watchXBlocksImpl.sendSync;
	watchXBlocks.sendAsync = watchXBlocksImpl.sendAsync;
	if(window.JsDiff == undefined) {
		window.JsDiff = require("./js_libs/diff.js");
	}
	// Prevent browser zoom changes like pinch-to-zoom
	webFrame.setVisualZoomLevelLimits(1, 1); //
	watchXBlocksImpl.setupVersion();
	watchXBlocksImpl.redirectConsoleLogging();
	watchXBlocks.init();
}, false);