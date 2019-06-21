Action()
{

	web_add_cookie("1_product=a61636d900aa017f060347f3b579603de0cc95bas%3A1%3A%221%22%3B; DOMAIN=10.7.90.44");

	web_add_cookie("pageSize=3850c3b06a836db1064a61255d6494b9f0b9b4a0s%3A2%3A%2220%22%3B; DOMAIN=10.7.90.44");

	web_add_cookie("language=079311f81ae6d2c83a8170d76dcad74d5f94f90es%3A5%3A%22zh_cn%22%3B; DOMAIN=10.7.90.44");

	web_url("index.php", 
		"URL=http://10.7.90.44:8032/bugfree3.0.3/index.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t113.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("jquery.min.js", 
		"URL=http://10.7.90.44:8032/bugfree3.0.3/assets/2edb3a4c/jquery.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/site/login", 
		"Snapshot=t114.inf", 
		LAST);

	web_url("bugfree3_basic.css", 
		"URL=http://10.7.90.44:8032/bugfree3.0.3/themes/classic/assets/css/bugfree3_basic.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/site/login", 
		"Snapshot=t115.inf", 
		LAST);

	web_url("blue.css", 
		"URL=http://10.7.90.44:8032/bugfree3.0.3/themes/classic/assets/css/blue.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/site/login", 
		"Snapshot=t116.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("seperate_line.png", 
		"URL=http://10.7.90.44:8032/bugfree3.0.3/themes/classic/assets/images/blue/seperate_line.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/site/login", 
		"Snapshot=t117.inf", 
		LAST);

	web_url("logo_login.png", 
		"URL=http://10.7.90.44:8032/bugfree3.0.3/themes/classic/assets/images/blue/logo_login.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/site/login", 
		"Snapshot=t118.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(16);

	lr_start_transaction("login");

    
	web_reg_find("Text=login",
		LAST);


	web_submit_data("login", 
		"Action=http://10.7.90.44:8032/bugfree3.0.3/index.php/site/login", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/site/login", 
		"Snapshot=t119.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=LoginForm[username]", "Value={username1}", ENDITEM, 
		"Name=LoginForm[password]", "Value={password1}", ENDITEM, 
		"Name=LoginForm[language]", "Value={chinese}", ENDITEM, 
		"Name=LoginForm[rememberMe]", "Value=0", ENDITEM, 
		LAST);
    
	lr_end_transaction("login", LR_AUTO);


	web_submit_data("getProductModule", 
		"Action=http://10.7.90.44:8032/bugfree3.0.3/index.php/search/getProductModule", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/bug/list/1", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		LAST);
	web_find("web_find",
		"What=Bug",
		LAST);
	web_url("edit", 
		"URL=http://10.7.90.44:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/bug/list/1", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/bugfree3.0.3/themes/classic/assets/images/active.png", "Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/50038a0d/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/50038a0d/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/50038a0d/jui/css/base/images/ui-icons_222222_256x240.png", "Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/8e4d999e/themes/default/default.css", "Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/8e4d999e/themes/default/default.png", "Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/93d21f33/indicator.gif", "Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		LAST);

	lr_think_time(15);

	lr_start_transaction("edit");

	web_submit_data("edit_2", 
		"Action=http://10.7.90.44:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=BugInfoView[deleted_file_id]", "Value=", ENDITEM, 
		"Name=BugInfoView[lock_version]", "Value=", ENDITEM, 
		"Name=BugInfoView[product_id]", "Value=1", ENDITEM, 
		"Name=isPageDirty", "Value=1", ENDITEM, 
		"Name=templateTitle", "Value=", ENDITEM, 
		"Name=BugInfoView[title]", "Value={title}", ENDITEM, 
		"Name=layer1_module", "Value=0", ENDITEM, 
		"Name=BugInfoView[productmodule_id]", "Value=0", ENDITEM, 
		"Name=BugInfoView[assign_to_name]", "Value={assignname}", ENDITEM, 
		"Name=BugInfoView[mail_to]", "Value=", ENDITEM, 
		"Name=BugInfoView[severity]", "Value=1", ENDITEM, 
		"Name=BugInfoView[priority]", "Value=", ENDITEM, 
		"Name=Custom[BugType]", "Value={daimaleixing}", ENDITEM, 
		"Name=Custom[HowFound]", "Value={danyuanceshi}", ENDITEM, 
		"Name=Custom[BugOS]", "Value=", ENDITEM, 
		"Name=Custom[BugBrowser]", "Value=", ENDITEM, 
		"Name=Custom[OpenedBuild]", "Value={w}", ENDITEM, 
		"Name=Custom[ResolvedBuild]", "Value=", ENDITEM, 
		"Name=Custom[BugSubStatus]", "Value=", ENDITEM, 
		"Name=Custom[BugMachine]", "Value=", ENDITEM, 
		"Name=Custom[BugKeyword]", "Value=", ENDITEM, 
		"Name=BugInfoView[related_bug]", "Value=", ENDITEM, 
		"Name=BugInfoView[related_case]", "Value=", ENDITEM, 
		"Name=BugInfoView[related_result]", "Value=", ENDITEM, 
		"Name=attachment_file[]", "Value=", "File=Yes", ENDITEM, 
		"Name=BugInfoView[action_note]", "Value=", ENDITEM, 
		LAST);

	lr_end_transaction("edit", LR_AUTO);


	web_url("Bug", 
		"URL=http://10.7.90.44:8032/bugfree3.0.3/index.php/bug/list/1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/case/list/1", 
		"Snapshot=t171.inf", 
		"Mode=HTTP", 
		LAST);
	web_url("w", 
		"URL=http://10.7.90.44:8032/bugfree3.0.3/index.php/bug/1180", 
		"TargetFrame=_blank", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getPreNextId", 
		"URL=http://10.7.90.44:8032/bugfree3.0.3/index.php/search/getPreNextId?id=1180&type=bug&product_id=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/bug/1180", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("getProductModule_2", 
		"Action=http://10.7.90.44:8032/bugfree3.0.3/index.php/search/getProductModule", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/bug/list/1", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		LAST);
	return 0;
}