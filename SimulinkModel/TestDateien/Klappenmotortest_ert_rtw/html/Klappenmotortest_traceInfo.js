function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Klappenmotortest"};
	this.sidHashMap["Klappenmotortest"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Constant1"] = {sid: "Klappenmotortest:7"};
	this.sidHashMap["Klappenmotortest:7"] = {rtwname: "<Root>/Constant1"};
	this.rtwnameHashMap["<Root>/Constant2"] = {sid: "Klappenmotortest:18"};
	this.sidHashMap["Klappenmotortest:18"] = {rtwname: "<Root>/Constant2"};
	this.rtwnameHashMap["<Root>/Delay1"] = {sid: "Klappenmotortest:40"};
	this.sidHashMap["Klappenmotortest:40"] = {rtwname: "<Root>/Delay1"};
	this.rtwnameHashMap["<Root>/Delay2"] = {sid: "Klappenmotortest:41"};
	this.sidHashMap["Klappenmotortest:41"] = {rtwname: "<Root>/Delay2"};
	this.rtwnameHashMap["<Root>/Delay3"] = {sid: "Klappenmotortest:42"};
	this.sidHashMap["Klappenmotortest:42"] = {rtwname: "<Root>/Delay3"};
	this.rtwnameHashMap["<Root>/Digital Output"] = {sid: "Klappenmotortest:1"};
	this.sidHashMap["Klappenmotortest:1"] = {rtwname: "<Root>/Digital Output"};
	this.rtwnameHashMap["<Root>/PWM Vorgabe für einen Motor "] = {sid: "Klappenmotortest:3"};
	this.sidHashMap["Klappenmotortest:3"] = {rtwname: "<Root>/PWM Vorgabe für einen Motor "};
	this.rtwnameHashMap["<Root>/Product1"] = {sid: "Klappenmotortest:14"};
	this.sidHashMap["Klappenmotortest:14"] = {rtwname: "<Root>/Product1"};
	this.rtwnameHashMap["<Root>/Scope1"] = {sid: "Klappenmotortest:44"};
	this.sidHashMap["Klappenmotortest:44"] = {rtwname: "<Root>/Scope1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
