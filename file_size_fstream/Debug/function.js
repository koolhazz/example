/**
 * 打印数组对象
 */
function debug(funcStr,param){if(typeof(console)!='undefined'&&param!=null){str='function: '+funcStr+"\n";switch(typeof(param)){case'boolean':case'string':str=str+param;break;case'object':for(var k in param){if(typeof(param[k])=='object'){str+=k+" =>object\n";for(var j in param[k]){if(typeof(param[k][j])=='object'){str+="	"+j+" =>object\n";for(var m in param[k][j]){str+="		"+m+" =>"+param[k][j][m]+"\n";}}else str+="	"+j+" =>"+param[k][j]+"\n";}}else str+=k+" => "+param[k]+"\n";}break;}console.log(str);return str;}}
/**
 * AS调用HTML的任何function CallJS({'method':'function_name'}) 或者还参数
 * CallJS({'method':'function_name','parm':[{'type':1,'name':'myname','ID',123}]})
 */
function CallJS(opts){var function_name=opts.method;if(typeof(eval(function_name))=='function'){if(opts.parm==undefined){eval(function_name)();}else{var parm=opts.parm;eval(function_name)(parm);}}}  
/**
 * 获取AS对象
 * 
 * @param movieName
 * @returns
 */
function getFlashMovieObject(movieName){if(window.document[movieName]){return window.document[movieName];}else if(navigator.appName.indexOf("Microsoft")==-1){if(document.embeds&&document.embeds[movieName])return document.embeds[movieName];}else{return document.getElementById(movieName);}}
/**
 * 判断浏览器,及版本
 * 存储于全局变量BROWSER 里面
 * */
var BROWSER={};var USERAGENT=navigator.userAgent.toLowerCase();browserVersion({'ie':'msie','firefox':'','chrome':'','opera':'','safari':'','mozilla':'','webkit':'','maxthon':'','qq':'qqbrowser'});if(BROWSER.safari){BROWSER.firefox=true;}BROWSER.opera=BROWSER.opera?opera.version():0;function browserVersion(types){var other=1;for(i in types){var v=types[i]?types[i]:i;if(USERAGENT.indexOf(v)!=-1){var re=new RegExp(v+'(\\/|\\s)([\\d\\.]+)','ig');var matches=re.exec(USERAGENT);var ver=matches!=null?matches[2]:0;other=ver!==0&&v!='mozilla'?0:other;}else{var ver=0;}eval('BROWSER.'+i+'= ver');}BROWSER.other=other;}
/**
 * 判断是否在数组，用法和PHP一样
 * @param needle
 * @param haystack
 * @returns {Boolean}
 */
function in_array(needle,haystack){if(typeof needle=='string'||typeof needle=='number'){for(var i in haystack){if(haystack[i]==needle){return true;}}}return false;}
/**
 * 获取DOM
 * @param id	DOMID
 * @returns DOM
 */
function D(id){return!id?null:document.getElementById(id);}
/**
 *================ 动态调用各个模块里面的JS================================ 
 *使用方法(一)：
 *例如 需要调用 landlord/weibo/match 里面的 getMatchRank 函数,首页不必加载landlord/weibo/match/js/match.js这个
 *只需 $F('getMatchRank',[{score:'1'}],'match');
 *
 *
 *方法(二)
 *function getMatchRank({score:'1'}){
 *	$F('getMatchRank',[{score:'1'}],'match');
 *}
 *注意 :以上2种方法，只要是在使用$F这个函数的时候， 在使用的时候  landlord/weibo/match/js/match.js 里面的这getMatchRank(函数名，必须加上前缀 【模块名_】)
 *如match模块  就要变为 match_getMatchRank，如果是XXX模块  就要XXX_getMatchRank
 */
var JSLOADED=[],evalscripts=[];var VERHASH=Math.random(),JSPATH=GAME.scripturl;function evalscript(s){if(s.indexOf('<script')==-1)return s;var p=/<script[^\>]*?>([^\x00]*?)<\/script>/ig;var arr=[];while(arr=p.exec(s)){var p1=/<script[^\>]*?src=\"([^\>]*?)\"[^\>]*?(reload=\"1\")?(?:charset=\"([\w\-]+?)\")?><\/script>/i;var arr1=[];arr1=p1.exec(arr[0]);if(arr1){appendscript(arr1[1],'',arr1[2],arr1[3]);}else{p1=/<script(.*?)>([^\x00]+?)<\/script>/i;arr1=p1.exec(arr[0]);appendscript('',arr1[2],arr1[1].indexOf('reload=')!=-1);}}return s;}function $F(func,args,mod,_app,_plantform){if(typeof mod==undefined){return false;}if(_app==undefined||typeof _app==undefined){_app=GAME.GAMENAME;}if(_plantform==undefined||typeof _plantform==undefined){_plantform=GAME.PLATFORM;}mod=mod.toLocaleLowerCase();var run=function(){var argc=args.length,s='';for(i=0;i<argc;i++){s+=',args['+i+']';}eval('var check = typeof '+mod+'_'+func+' == \'function\'');if(check){eval(mod+'_'+func+'('+s.substr(1)+')');}else{setTimeout(function(){checkrun();},50);}};var checkrun=function(){if(JSLOADED[src]){run();}else{setTimeout(function(){checkrun();},50);}};src=JSPATH+_app+"/"+_plantform+"/"+mod+'/js/'+mod+'.js?'+VERHASH+Math.random();if(!JSLOADED[src]||1){appendscript(src,"","1");}checkrun();}function appendscript(src,text,reload,charset){var id=hash(src+text);if(!reload&&in_array(id,evalscripts))return;if(reload&&D(id)){D(id).parentNode.removeChild(D(id));}evalscripts.push(id);var scriptNode=document.createElement("script");scriptNode.type="text/javascript";scriptNode.id=id;scriptNode.charset=charset?charset:(BROWSER.firefox?document.characterSet:document.charset);try{if(src){scriptNode.src=src;scriptNode.onloadDone=false;scriptNode.onload=function(){scriptNode.onloadDone=true;JSLOADED[src]=1;};scriptNode.onreadystatechange=function(){if((scriptNode.readyState=='loaded'||scriptNode.readyState=='complete')&&!scriptNode.onloadDone){scriptNode.onloadDone=true;JSLOADED[src]=1;}};}else if(text){scriptNode.text=text;}document.getElementsByTagName('head')[0].appendChild(scriptNode);}catch(e){}}function hash(string,length){var length=length?length:32;var start=0;var i=0;var result='';filllen=length-string.length%length;for(i=0;i<filllen;i++){string+="0";}while(start<string.length){result=stringxor(result,string.substr(start,length));start+=length;}return result;}function stringxor(s1,s2){var s='';var hash='abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ';var max=Math.max(s1.length,s2.length);for(var i=0;i<max;i++){var k=s1.charCodeAt(i)^s2.charCodeAt(i);s+=hash.charAt(k%52);}return s;}
/**
 * ajax 获取数据
 * @param mod		Call模型
 * @param param		参数
 * @param reCall	回调函数
 * @param showType	请求成功后的显示模式
 */
function ajaxget(param,reCall,mod,showType){var matchMod=GAME.scripturl;mod=(mod==undefined||typeof mod==undefined)?'dailylog':mod;if(typeof param!='object'){param={};}param.m=mod;param.deb=GAME.DEBUG;jQuery.ajax({url:matchMod,data:param,dataType:'TEXT',success:function(data){try{eval("var data="+data);}catch(e){if(GAME.DEBUG){showMsg(e.message,e.name);}};if(data!==null){if(typeof reCall=='function'){reCall(data);}else{if(data.errorContents){alert(data.errorContents);}else{showMsg("请求失败","非常抱歉");}}}else{if(typeof reCall=='function'){reCall(data);}else{if(typeof showType!='object'){showType={};showType.type=0;}var type=showType.type;switch(type){case 1:{if(data.contents){alert(data.contents);}else{alert('undefined contents');}break;}}}}}});}
//下面这个用于存储通过getNavPage创建的DIV的显示与隐藏
/**
 * 高亮显示某个导航选项
 * @param id 对应navlist 属性最后的一个数值
 */
function navHightLight(id){jQuery("#headerbox li[navlist='id_"+id+"']").addClass("c").siblings().removeClass("c");}
/**
 * 导航配置
 */
function showNav(id)
{
	navHightLight(id);
	if (id == 5)
	{
		$F('show',[],'feed');
	}
	else if (id == 1)
	{
		showGame();
	}
}
/**
 * 显示首页
 */
function showGame(){for(var i=0;i<hideArr.length;i++){jQuery("#"+hideArr[i]).hide(200);}$("#gameBody").css({position:'absolute',top:jQuery("#headerbox").height()});}

/**
 * 导航页面显示
 * @param module
 * @param json param ajax请求参数
 */
var hideArr=[];
function getNavPage(module,param){if(typeof param!='object'){param={};}for(var i=0;i<hideArr.length;i++){jQuery("#"+hideArr[i]).hide();}if(in_array(param.id,hideArr)){var divCon=$("#"+param.id+"");divCon.show();$("#gameBody").css({position:'absolute',top:'-10000px'});}else{hideArr.push(param.id);showLoading();var divCon=$("<div/>").attr({'id':param.id}).css({display:'none',width:"760px",margin:'0 auto',top:$('#headerbox').height()}).appendTo(jQuery("#main")).show(200);$("#gameBody").css({position:'absolute',top:'-10000px','z-index':1});if(typeof param.jsFun!='function'){var fun=function(data){evalscript(data.contents);divCon.html(data.contents);hideLoading();};ajaxget(param,fun,module);}else{param.jsFun();}}}
/**
 *  AS调用充值页面。 需兼容所有平台
 */
function goPay(){	showNav(3);}
/**
 * 好友邀请弹窗,邀请多个好友
 */
function openInviteDiv(){	$F('InviteMore',arguments,'invite');}
/**
 * 邀请单个好友，用于AS
 * @param param
 */
function inviteOne(param){	$F('inviteOne',arguments,'invite');}
/**
 * 用于AS调用  兼容其他平台；统一函数名
 */
function feedBack(param){if(param.type=='my'){$F('feedBack',[{'type':'my'}],'feed');}else{$F('feedBack',[{'type':''}],'feed');}}
/**
 * 模拟alert弹出框
 * @param msg		string	弹出内容
 * @param title		string	标题信息
 * @param button	json	按钮个数，以及按钮点击后触发的时间
 * @param timeout	int		定时关闭时间
 * @param width		int		弹出框宽度
 * @param height	int		弹出框高度
 */
function showMsg(msg,title,button,timeout,width,height){$F('showmsg',arguments,'jqueryui');}
/**
 * 弹出框的显示
 * @param id   		dialog要显示出来的ID值
 * @param param		dialog参数 json  详情请参考http://jqueryui.com/demos/dialog/#modal-confirmation
 */
function dialog(id,param){$F('dialog',arguments,'jqueryui');}
/**
 * 发送Feed
 * @param param  json feed参数
 */
function sendFeed(param){	$F('sendFeed',arguments,'publish');}
/**
 * 高手选拔赛排行榜
 * @param type
 */
function matchRank(type){if(type==undefined){$F('getMatchRank',[{'score':1,'page':1}],'match');}}
/**
 * 跳转主页地址
 */
function goHome()
{
	//
}
/**
 * 设置cookie
 * @param name
 * @param value
 */
function SetCookie(name,value){var Days=30;var exp=new Date();exp.setTime(exp.getTime()+Days*24*60*60*1000);document.cookie=name+"="+escape(value)+";expires="+exp.toGMTString();}
/**
 * 获取cookie
 * @param name
 * @returns
 */ 
function getCookie(name){var arr=document.cookie.match(new RegExp("(^| )"+name+"=([^;]*)(;|$)"));if(arr!=null)return unescape(arr[2]);return null;}
/**
 * 删除cookie
 * @param name
 */
function delCookie(name){var exp=new Date();exp.setTime(exp.getTime()-1);var cval=getCookie(name);if(cval!=null)document.cookie=name+"="+cval+";expires="+exp.toGMTString();}
/**
 * 显示等待图标
 */
function showLoading(){if(window.LoadingObj==undefined){window.LoadingObj=jQuery("<div/>").attr('id','loading').css({'text-align':'center',"z-index":"2","position":"absolute","display":"none","width":$("#main").width(),"padding":"200px 0","top":"40px","left":"0"}).html('<img src="'+GAME.imgUrl+'landlord/facebooktl/common/loading.gif" />');window.LoadingObj.appendTo('#main');jQuery("<div>").attr({id:'loadcorver'}).addClass('opaticy').css({"top":"0","opacity":"0.2","width":"100%","height":"100%","z-index":"1","position":"absolute","background":"#222"}).appendTo(LoadingObj);}window.LoadingObj.show();}
/**
 * 隐藏等待图标
 */
function hideLoading(){window.LoadingObj.hide();}
/**
 * 屏蔽右键
 */
var RightClick={init:function(){this.FlashObjectID="flashBox";this.FlashContainerID="gameBody";this.Cache=this.FlashObjectID;if(window.addEventListener){window.addEventListener("mousedown",this.onGeckoMouse(),true);}else{document.getElementById(this.FlashContainerID).onmouseup=function(){document.getElementById(RightClick.FlashContainerID).releaseCapture();};document.oncontextmenu=function(){if(window.event.srcElement.id==RightClick.FlashObjectID){return false;}else{RightClick.Cache="nan";}};document.getElementById(this.FlashContainerID).onmousedown=RightClick.onIEMouse;}},killEvents:function(eventObject){if(eventObject){if(eventObject.stopPropagation)eventObject.stopPropagation();if(eventObject.preventDefault)eventObject.preventDefault();if(eventObject.preventCapture)eventObject.preventCapture();if(eventObject.preventBubble)eventObject.preventBubble();}},onGeckoMouse:function(ev){return function(ev){if(ev.button!=0){RightClick.killEvents(ev);if(ev.target.id==RightClick.FlashObjectID&&RightClick.Cache==RightClick.FlashObjectID){RightClick.call();}RightClick.Cache=ev.target.id;}};},onIEMouse:function(){if(event.button>1){if(window.event.srcElement.id==RightClick.FlashObjectID&&RightClick.Cache==RightClick.FlashObjectID){RightClick.call();}document.getElementById(RightClick.FlashContainerID).setCapture();if(window.event.srcElement.id)RightClick.Cache=window.event.srcElement.id;}},call:function(){getFlashMovieObject('flashBox').sendToActionScript({method:"playCards"});}};
/**
 * 发feed
 *
 * @author 黄国星
 *
 * @param {Object} params
 *
 * Name     | Type     | Description
 * ---------|----------|----------------------------------------------
 * feed     | String   | the feed name you wait to publish
 * replace  | Object   | search the key AND replace by value
 * cb       | Function | callback function use to handle the response
 */
function publish(params)
{	
    if(typeof(FB)=='undefined' || !FB.getAccessToken())
	{
	    setTimeout("publish(params)", 3000);
		return;
	}
	
	if(typeof(params.cb) != 'function')
	{
	    params.cb = stat;    
	}
	
	Facebook_api.publish(params);
}

/**
 * feed统计
 *
 * @author 黄国星
 *
 * @param int|object
 *
 * @return boolean
 */
function stat(response)
{
    if(response && !response.error)
    {
	    console.log(response);
	    return true;
	}
	
    return false;	
}

/**
 * 初始化信息
 *
 * @author 黄国星
 *
 * @return void
 */
function loadInit()
{
    if(typeof(FB)=='undefined' || !FB.getAccessToken())
	{
	    console.log(FB.getAccessToken());
		setTimeout("loadInit()", 3000);
		return;
	}
	console.log(flashVars.userInfo);
    var userInfo = flashVars.userInfo;
	
    //新注册用户
    if(userInfo.isRegister == '1')
	{
	    Facebook_api.getMe(updateUser);    
	}
	else if(userInfo.todayFirst) //今天首次登录
	{
	    publish();
	}
}

/**
 * 更新用户信息
 *
 * @author 黄国星
 *
 * @param {object} response 用户信息
 *
 * @return void
 */
function updateUser(response)
{
    if(!response || response.error)
    {
	    return;
	}
	
	response.icon   = "https://graph.facebook.com/" + response.id + "/picture?type=small";
	response.middle = "https://graph.facebook.com/" + response.id + "/picture?type=normal";
	response.big    = "https://graph.facebook.com/" + response.id + "/picture?type=large";
	
	flashVars.userInfo.mnick  = response.name;
	flashVars.userInfo.icon   = response.icon;
	flashVars.userInfo.middle = response.middle;
    flashVars.userInfo.big    = response.big;

	var url = flashVars.urls.app + "?p=profile";
	//console.log(url);
	console.log(response);
    jQuery.post(url, {"userInfo": response});    
} 
