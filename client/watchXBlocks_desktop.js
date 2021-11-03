const { ipcRenderer, webFrame } = require("electron");
const winston = require("winston");

ipcRenderer.on('device-connect', (event, args) => {
	const { curr_usb_state } = args;
	watchXBlocks.setupColorEx(document, '#usb-connected', curr_usb_state ? '#7de224': '#ff4646');
	console.log("exported ...:"); // event.sender.send
});
ipcRenderer.on("upload-hex-res", (event, args) => {
	watchXBlocks.firmwareUploadResult(args);
});
ipcRenderer.on("code-res", (event, args) => {
	watchXBlocks.sendCodeReturn(args);
});

var watchXBlocksImpl = {};

/** Wraps the console.log warn and errors to send data to logging file. */
watchXBlocksImpl.redirectConsoleLogging = function() {
	var consoleLog = console.log;
	var consoleWarning = console.warning;
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
	console.log = function(logMessage) {
		consoleLog.apply(console, arguments);
		var tagRenderer = '[Renderer "' + __stackfilename + ':' + __function + '():L' + __line + '"] ';
		winston.info(tagRenderer + logMessage);
	};
	console.warning = function(warnMessage) {
		consoleWarning.apply(console, arguments);
		var tagRenderer = '[Renderer "' + __stackfilename + ':' + __function + '():L' + __line + '"] ';
		winston.warn(tagRenderer + warnMessage);
	};
	console.error = function(errMessage) {
		consoleError.apply(console, arguments);
		var tagRenderer = '[Renderer "' + __stackfilename + ':' + __function + '():L' + __line + '"] ';
		winston.error(tagRenderer + errMessage);
	};
};


watchXBlocksImpl.setupVersion = function() {
	var result = ipcRenderer.sendSync('get-version', { });
	watchXBlocks.setTextEx(document, '#watchx_version', result);
};

/** Initialize watchXBlocks code required for Electron on page load. */
window.addEventListener('DOMContentLoaded', event => {
	watchXBlocks.sendSync = ipcRenderer.sendSync;
	watchXBlocks.sendAsync = ipcRenderer.send
	if(window.JsDiff == undefined) {
		window.JsDiff = require("./js_libs/diff.js");
	}
	// Prevent browser zoom changes like pinch-to-zoom
	webFrame.setVisualZoomLevelLimits(1, 1); //
	watchXBlocksImpl.setupVersion();
	watchXBlocksImpl.redirectConsoleLogging();
	watchXBlocks.init();
}, false);