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
		"Snapshot=t7.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("jquery.min.js", 
		"URL=http://10.7.90.44:8032/bugfree3.0.3/assets/2edb3a4c/jquery.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/site/login", 
		"Snapshot=t8.inf", 
		LAST);

	web_url("bugfree3_basic.css", 
		"URL=http://10.7.90.44:8032/bugfree3.0.3/themes/classic/assets/css/bugfree3_basic.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/site/login", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("blue.css", 
		"URL=http://10.7.90.44:8032/bugfree3.0.3/themes/classic/assets/css/blue.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/site/login", 
		"Snapshot=t10.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("seperate_line.png", 
		"URL=http://10.7.90.44:8032/bugfree3.0.3/themes/classic/assets/images/blue/seperate_line.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/site/login", 
		"Snapshot=t11.inf", 
		LAST);

	web_url("logo_login.png", 
		"URL=http://10.7.90.44:8032/bugfree3.0.3/themes/classic/assets/images/blue/logo_login.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/site/login", 
		"Snapshot=t12.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(8);

    
	lr_start_transaction("login");

    
	web_reg_find("Text=Case",
		"Search=Body",
		"SaveCount=login_count",
		LAST);



	web_submit_data("login", 
		"Action=http://10.7.90.44:8032/bugfree3.0.3/index.php/site/login", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/site/login", 
		"Snapshot=t13.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=LoginForm[username]", "Value={user2}", ENDITEM, 
		"Name=LoginForm[password]", "Value={password2}", ENDITEM, 
		"Name=LoginForm[language]", "Value={country}", ENDITEM, 
		"Name=LoginForm[rememberMe]", "Value=0", ENDITEM, 
		LAST);


	lr_end_transaction("login", LR_AUTO);


	

	if(atoi(lr_eval_string("{login_count}"))>0)
	lr_end_transaction("login", LR_PASS);
else		
	lr_end_transaction("login", LR_FAIL)£»

	lr_end_transaction("login", LR_AUTO);

	web_submit_data("getProductModule", 
		"Action=http://10.7.90.44:8032/bugfree3.0.3/index.php/search/getProductModule", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/bug/list/1", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		LAST);

	web_url("1", 
		"URL=http://10.7.90.44:8032/bugfree3.0.3/index.php/case/list/1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/bug/list/1", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("getProductModule_2", 
		"Action=http://10.7.90.44:8032/bugfree3.0.3/index.php/search/getProductModule", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/case/list/1", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		LAST);

	

	web_url("edit", 
		"URL=http://10.7.90.44:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/case/list/1", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/bugfree3.0.3/assets/50038a0d/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/50038a0d/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/50038a0d/jui/css/base/images/ui-icons_222222_256x240.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/8e4d999e/themes/default/default.css", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/8e4d999e/themes/default/default.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/93d21f33/indicator.gif", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		LAST);

	lr_think_time(23);
lr_start_transaction("edit");
web_reg_find("Search=Body",
		"SaveCount=edit_count",
		"Text=Case±êÌâ",
		LAST);
	web_submit_data("edit_2", 
		"Action=http://10.7.90.44:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=CaseInfoView[deleted_file_id]", "Value=", ENDITEM, 
		"Name=CaseInfoView[lock_version]", "Value=", ENDITEM, 
		"Name=CaseInfoView[product_id]", "Value=1", ENDITEM, 
		"Name=isPageDirty", "Value=1", ENDITEM, 
		"Name=templateTitle", "Value=", ENDITEM, 
		"Name=CaseInfoView[title]", "Value={title}", ENDITEM, 
		"Name=layer1_module", "Value=0", ENDITEM, 
		"Name=CaseInfoView[productmodule_id]", "Value=0", ENDITEM, 
		"Name=CaseInfoView[case_status]", "Value={Active}", ENDITEM, 
		"Name=CaseInfoView[assign_to_name]", "Value={assignname}", ENDITEM, 
		"Name=CaseInfoView[mail_to]", "Value=", ENDITEM, 
		"Name=CaseInfoView[priority]", "Value=1", ENDITEM, 
		"Name=Custom[CaseType]", "Value={yonghujiemian}", ENDITEM, 
		"Name=Custom[CaseMethod]", "Value={huiguiceshi}", ENDITEM, 
		"Name=Custom[CasePlan]", "Value=", ENDITEM, 
		"Name=Custom[ScriptStatus]", "Value=", ENDITEM, 
		"Name=Custom[ScriptedBy]", "Value=", ENDITEM, 
		"Name=Custom[ScriptedDate]", "Value=", ENDITEM, 
		"Name=Custom[ScriptLocation]", "Value=", ENDITEM, 
		"Name=Custom[CaseKeyword]", "Value=", ENDITEM, 
		"Name=Custom[DisplayOrder]", "Value=0", ENDITEM, 
		"Name=CaseInfoView[related_bug]", "Value=", ENDITEM, 
		"Name=CaseInfoView[related_case]", "Value=", ENDITEM, 
		"Name=attachment_file[]", "Value=", "File=Yes", ENDITEM, 
		"Name=CaseInfoView[action_note]", "Value=", ENDITEM, 
		LAST);

	lr_end_transaction("edit", LR_AUTO);
    //check
if(atoi(lr_eval_string("{edit_count}"))>0)
	{lr_output_message("edit successfully");}	
else		
	{
	lr_error_message("edit falied");
	return 0;
	}
	web_url("BugFree", 
		"URL=http://10.7.90.44:8032/bugfree3.0.3/index.php/case/list/1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/bugfree3.0.3/themes/classic/assets/images/down.gif", ENDITEM, 
		"Url=/bugfree3.0.3/themes/classic/assets/images//close_div.gif", ENDITEM, 
		"Url=/bugfree3.0.3/assets/bc55afbf/img/page.gif", ENDITEM, 
		LAST);

	web_url("case1", 
		"URL=http://10.7.90.44:8032/bugfree3.0.3/index.php/case/6", 
		"TargetFrame=_blank", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("getProductModule_3", 
		"Action=http://10.7.90.44:8032/bugfree3.0.3/index.php/search/getProductModule", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/case/list/1", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		LAST);

	web_url("getPreNextId", 
		"URL=http://10.7.90.44:8032/bugfree3.0.3/index.php/search/getPreNextId?id=6&type=case&product_id=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.44:8032/bugfree3.0.3/index.php/case/6", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}