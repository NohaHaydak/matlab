function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "counter"};
	this.sidHashMap["counter"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Add"] = {sid: "counter:2"};
	this.sidHashMap["counter:2"] = {rtwname: "<Root>/Add"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "counter:6"};
	this.sidHashMap["counter:6"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Constant1"] = {sid: "counter:7"};
	this.sidHashMap["counter:7"] = {rtwname: "<Root>/Constant1"};
	this.rtwnameHashMap["<Root>/Scope"] = {sid: "counter:9"};
	this.sidHashMap["counter:9"] = {rtwname: "<Root>/Scope"};
	this.rtwnameHashMap["<Root>/Switch"] = {sid: "counter:5"};
	this.sidHashMap["counter:5"] = {rtwname: "<Root>/Switch"};
	this.rtwnameHashMap["<Root>/Unit Delay"] = {sid: "counter:1"};
	this.sidHashMap["counter:1"] = {rtwname: "<Root>/Unit Delay"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
