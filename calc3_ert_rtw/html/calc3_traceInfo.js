function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "calc3"};
	this.sidHashMap["calc3"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "calc3:25"};
	this.sidHashMap["calc3:25"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Input"] = {sid: "calc3:22"};
	this.sidHashMap["calc3:22"] = {rtwname: "<Root>/Input"};
	this.rtwnameHashMap["<Root>/Input1"] = {sid: "calc3:24"};
	this.sidHashMap["calc3:24"] = {rtwname: "<Root>/Input1"};
	this.rtwnameHashMap["<Root>/Subsystem"] = {sid: "calc3:25"};
	this.sidHashMap["calc3:25"] = {rtwname: "<Root>/Subsystem"};
	this.rtwnameHashMap["<Root>/Output"] = {sid: "calc3:16"};
	this.sidHashMap["calc3:16"] = {rtwname: "<Root>/Output"};
	this.rtwnameHashMap["<Root>/Output1"] = {sid: "calc3:17"};
	this.sidHashMap["calc3:17"] = {rtwname: "<Root>/Output1"};
	this.rtwnameHashMap["<Root>/Output2"] = {sid: "calc3:18"};
	this.sidHashMap["calc3:18"] = {rtwname: "<Root>/Output2"};
	this.rtwnameHashMap["<Root>/Output3"] = {sid: "calc3:19"};
	this.sidHashMap["calc3:19"] = {rtwname: "<Root>/Output3"};
	this.rtwnameHashMap["<Root>/Output4"] = {sid: "calc3:20"};
	this.sidHashMap["calc3:20"] = {rtwname: "<Root>/Output4"};
	this.rtwnameHashMap["<Root>/Output5"] = {sid: "calc3:21"};
	this.sidHashMap["calc3:21"] = {rtwname: "<Root>/Output5"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "calc3:26"};
	this.sidHashMap["calc3:26"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/In2"] = {sid: "calc3:27"};
	this.sidHashMap["calc3:27"] = {rtwname: "<S1>/In2"};
	this.rtwnameHashMap["<S1>/AND"] = {sid: "calc3:4"};
	this.sidHashMap["calc3:4"] = {rtwname: "<S1>/AND"};
	this.rtwnameHashMap["<S1>/NOR"] = {sid: "calc3:6"};
	this.sidHashMap["calc3:6"] = {rtwname: "<S1>/NOR"};
	this.rtwnameHashMap["<S1>/NOT"] = {sid: "calc3:8"};
	this.sidHashMap["calc3:8"] = {rtwname: "<S1>/NOT"};
	this.rtwnameHashMap["<S1>/NOT1"] = {sid: "calc3:9"};
	this.sidHashMap["calc3:9"] = {rtwname: "<S1>/NOT1"};
	this.rtwnameHashMap["<S1>/OR"] = {sid: "calc3:7"};
	this.sidHashMap["calc3:7"] = {rtwname: "<S1>/OR"};
	this.rtwnameHashMap["<S1>/XOR"] = {sid: "calc3:3"};
	this.sidHashMap["calc3:3"] = {rtwname: "<S1>/XOR"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "calc3:28"};
	this.sidHashMap["calc3:28"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S1>/Out2"] = {sid: "calc3:29"};
	this.sidHashMap["calc3:29"] = {rtwname: "<S1>/Out2"};
	this.rtwnameHashMap["<S1>/Out3"] = {sid: "calc3:30"};
	this.sidHashMap["calc3:30"] = {rtwname: "<S1>/Out3"};
	this.rtwnameHashMap["<S1>/Out4"] = {sid: "calc3:31"};
	this.sidHashMap["calc3:31"] = {rtwname: "<S1>/Out4"};
	this.rtwnameHashMap["<S1>/Out5"] = {sid: "calc3:32"};
	this.sidHashMap["calc3:32"] = {rtwname: "<S1>/Out5"};
	this.rtwnameHashMap["<S1>/Out6"] = {sid: "calc3:33"};
	this.sidHashMap["calc3:33"] = {rtwname: "<S1>/Out6"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
