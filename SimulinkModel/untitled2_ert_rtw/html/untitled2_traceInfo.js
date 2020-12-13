function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "untitled2"};
	this.sidHashMap["untitled2"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "untitled2:6"};
	this.sidHashMap["untitled2:6"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "untitled2:6"};
	this.sidHashMap["untitled2:6"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "untitled2:3"};
	this.sidHashMap["untitled2:3"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Digital Output1"] = {sid: "untitled2:4"};
	this.sidHashMap["untitled2:4"] = {rtwname: "<Root>/Digital Output1"};
	this.rtwnameHashMap["<Root>/PWM Vorgabe für einen Motor "] = {sid: "untitled2:2"};
	this.sidHashMap["untitled2:2"] = {rtwname: "<Root>/PWM Vorgabe für einen Motor "};
	this.rtwnameHashMap["<S1>:1"] = {sid: "untitled2:6:1"};
	this.sidHashMap["untitled2:6:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:3"] = {sid: "untitled2:6:3"};
	this.sidHashMap["untitled2:6:3"] = {rtwname: "<S1>:3"};
	this.rtwnameHashMap["<S1>:2"] = {sid: "untitled2:6:2"};
	this.sidHashMap["untitled2:6:2"] = {rtwname: "<S1>:2"};
	this.rtwnameHashMap["<S1>:4"] = {sid: "untitled2:6:4"};
	this.sidHashMap["untitled2:6:4"] = {rtwname: "<S1>:4"};
	this.rtwnameHashMap["<S1>:6"] = {sid: "untitled2:6:6"};
	this.sidHashMap["untitled2:6:6"] = {rtwname: "<S1>:6"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
