const winston = require("winston");
const config = require("./cfgconst");
const helper = require("./cfghelper");
const { app } = require("electron");

const tagMgr = "[watchXStp] ";

module.exports.initializeCore = function(observer, callback) {
	observer("Initializing Core ...");
	winston.info(tagMgr + ' initialize core ...');
	const compile_dir = config.get_compiler_path();
	if(compile_dir != null) {
		winston.info(tagMgr + ' compiled_dir: ' + compile_dir);
		observer("Checking Compiler");
		helper.check_version(compile_dir, (code, check, stdout, stderr) => {
			observer("Checking Core");
			helper.install_core(compile_dir, (code, stdout, stderr) => {
				winston.info(tagMgr + 'Output: ' + stdout);
				callback(code);
			});
		});
		return;
	}
	var user_path = app.getPath('userData');
	winston.info(tagMgr + ' UserDataPath: ' + user_path);
	helper.download_core(user_path, observer, (error, compile_dir) => {
		if(error != null) {
			winston.info(tagMgr + 'Compiler not found !!!');
			observer("Error: Compiler not found ...");
			callback(-1);
			return;
		}
		observer("Checking Compiler");
		helper.check_version(compile_dir, (code, check, stdout, stderr) => {
			config.set_compiler_path(compile_dir);
			observer("Installing Core");
			helper.install_core(compile_dir, (code, stdout, stderr) => {
				winston.info(tagMgr + 'Output: ' + stdout);
				callback(code);
			});
		});
	});
}
