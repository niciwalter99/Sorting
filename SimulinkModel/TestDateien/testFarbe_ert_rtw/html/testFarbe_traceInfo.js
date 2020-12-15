function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "testFarbe"};
	this.sidHashMap["testFarbe"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/ADC"] = {sid: "testFarbe:1"};
	this.sidHashMap["testFarbe:1"] = {rtwname: "<Root>/ADC"};
	this.rtwnameHashMap["<Root>/Scope"] = {sid: "testFarbe:2"};
	this.sidHashMap["testFarbe:2"] = {rtwname: "<Root>/Scope"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
