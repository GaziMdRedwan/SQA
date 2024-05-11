/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=beta&milestone=125", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(5);

	web_custom_request("collect", 
		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j101&a=1404183624&t=pageview&_s=1&dl=chrome-extension%3A%2F%2Fllbdoljkknpjgfcnbnoiehjcgancpjmd%2F_generated_background_page.html&dp=%2Fbackground&ul=en-us&de=UTF-8&sd=24-bit&sr=1536x864&vp=&je=0&_u=QACAAEABAAAAACAEI~&jid=795540259&gjid=1670636606&cid=830389759.1694837545&tid=UA-169009641-3&_gid=1307316543.1704256953&_r=1&_slc=1&z=645597186", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		EXTRARES, 
		"Url=https://darkreader.org/blog/posts.json", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("ACCOUNT_CHOOSER="
		"AFx_qI6CptrIQJ0JT_CzhF04ksMAYtsCRWk57dZclLbq33ZkqIg-U7p6iI3Xha5Cw6_BJ_rq6GFfzsnoHwfC6kneZMYxRNq-unHznpPm13YrGwP6AiVAQ9I_WEp7XbuAkVejLcU3ES51wiKK9fBIHGh7aNWR6UPOttTfEtLMb_wtZ80EHPEZMEkL2aP6kXGes64iQUOMgOisrMuW07gLdtx60HY76BT2csGxj1Q4Sk8IDi24_J7m6Kf_zTYp_dxufFRAyeLr_2e3v-Rp-x9u_xVxD1Cp9a7cI5VP0Y_J6aHF6OvzYzi75RsK3gUaOmjBZFjLwD3F9LruzD9bzYOI3kjJTuSO86AWwGlC_gPZU7B5IseawN2a7rLJ5Jv1lLqJ9IlW3PnnPseIgOIaioOIYaHn5h1V__mLD4UGhFvEo5q2pzgKENmlBogHGAzCfsk2RQxyI7bhlaK5YUsSJ6i1AF8fbdZnmx5SdqWg4faCdgbNQTsh2iWgMr"
		"ejqYRfj5t7Rds_cBSH4uC8N-T9ioMPbBvxazyj5YHyjA6VQ0dHzxic331Rml3O40QVb_Db7ZJSHbDl5Yv3-yS8QnY4XA71h3DC8Kccspr19zsH8MzPjJ9n6c9aW2R-JKSRx8EsT4Klk0WiI9Jt2vWdgiQJ6wSkPT60ORRSSV-hmzPselT9QQzriIQTv92jdAa7iGwX4VWF2hdCLs2cnswvu1QZBgg7GMxjU_HhM_uSeQ; DOMAIN=accounts.google.com");

	web_add_cookie("LSOLH=_SVI_EKbc1uLvjoQDGBAiP01BRURIZl9xbkxncUdxNy1fXy1pUUU3dDhGdURNdHh0VU1oclZmaXRIUElnblpCaGZQVktITjFFT0NPSVNLMA_:28449233:5844; DOMAIN=accounts.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQIg5sB; DOMAIN=accounts.google.com");

	web_add_cookie("OTZ=7536398_32_32__32_; DOMAIN=accounts.google.com");

	web_add_cookie("SID=g.a000jAgFXxsKmdrul76IzI_n7dWasVqRtjFq5GuH6dfmePU_fJJpBLeF97Kej1xmbQE_JYeNBQACgYKAQsSAQASFQHGX2Mi_vt3kQZm-tlyMU0Wc_N7FxoVAUF8yKrCnJbsTZ54hIISoTIZ31-y0076; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSID=g.a000jAgFXxsKmdrul76IzI_n7dWasVqRtjFq5GuH6dfmePU_fJJpSUkam7Apr-bHwr-FYOY6PgACgYKAe4SAQASFQHGX2MiBzRmjDpHcKB92qLVdl48ohoVAUF8yKrCZFIX07AClz5zLl_tXhtm0076; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSID=g.a000jAgFXxsKmdrul76IzI_n7dWasVqRtjFq5GuH6dfmePU_fJJpVLpR0CNWhHD2mWSukkKCJgACgYKARESAQASFQHGX2MimS83sVwdgvWtaaY9UxOOtBoVAUF8yKoQJ3sRLLRpiJbrVz1fkNau0076; DOMAIN=accounts.google.com");

	web_add_cookie("HSID=An5lCeZVvXhGYznJH; DOMAIN=accounts.google.com");

	web_add_cookie("SSID=AU-t4nhpOjgXDdf-D; DOMAIN=accounts.google.com");

	web_add_cookie("APISID=PySt7TArtLmMAQSX/A6-fNYNKnH_tnRNJt; DOMAIN=accounts.google.com");

	web_add_cookie("SAPISID=nscqmydOhuIGsQlg/AXIWx3huHmocw0KGh; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PAPISID=nscqmydOhuIGsQlg/AXIWx3huHmocw0KGh; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PAPISID=nscqmydOhuIGsQlg/AXIWx3huHmocw0KGh; DOMAIN=accounts.google.com");

	web_add_cookie("LSID=o.calendar.google.com|o.chromewebstore.google.com|o.drive.fife.usercontent.google.com|o.drive.google.com|o.lens.google.com|o.mail.google.com|o.meet.google.com|o.myaccount.google.com|o.myactivity.google.com|o.photos.fife.usercontent.google.com|o.photos.google.com|o.play.google.com|o.script.google.com|o.sites.google.com|s.BD|s.blogger|s.youtube"
		":g.a000jAgFX5wmVhfhvVLme4HmfcgusA6DCGSY6wH3mKOutbSGQh4NDETrGiIb3PXOQu02KnI_BgACgYKAUwSAQASFQHGX2MigZIm5JYaqYQVrxYJup0WIRoVAUF8yKqdVoFZIM_NRFPEGS2gan3q0076; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-1PLSID=o.calendar.google.com|o.chromewebstore.google.com|o.drive.fife.usercontent.google.com|o.drive.google.com|o.lens.google.com|o.mail.google.com|o.meet.google.com|o.myaccount.google.com|o.myactivity.google.com|o.photos.fife.usercontent.google.com|o.photos.google.com|o.play.google.com|o.script.google.com|o.sites.google.com|s.BD|s.blogger|s.youtube"
		":g.a000jAgFX5wmVhfhvVLme4HmfcgusA6DCGSY6wH3mKOutbSGQh4NiFd6oo1KvlZxa5MqcKT-SgACgYKAewSAQASFQHGX2MilUsylXQluaQeCKWps7vbiBoVAUF8yKpzNEvKcNPc0KXgDbR_tOuy0076; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-3PLSID=o.calendar.google.com|o.chromewebstore.google.com|o.drive.fife.usercontent.google.com|o.drive.google.com|o.lens.google.com|o.mail.google.com|o.meet.google.com|o.myaccount.google.com|o.myactivity.google.com|o.photos.fife.usercontent.google.com|o.photos.google.com|o.play.google.com|o.script.google.com|o.sites.google.com|s.BD|s.blogger|s.youtube"
		":g.a000jAgFX5wmVhfhvVLme4HmfcgusA6DCGSY6wH3mKOutbSGQh4NJPFntC_8owrHNtwY-5nwaQACgYKAeUSAQASFQHGX2Mi2I4o48UVTSCGISAs-pya3BoVAUF8yKrzml4xEzzn0Mc9mqfZ7tjY0076; DOMAIN=accounts.google.com");

	web_add_cookie("AEC=AQTF6HwXEyGY5X7ly_dmVM1s_24F8a4GjCsCeOIIjW-5M6PUNxyoV56zmg; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2024-05-07-03; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSIDTS=sidts-CjEBLwcBXLN0r9noFf-VU4tRTtHZOnbrU5H-va9z49YiHI3619iCoeG-TuxNAFTBplizEAA; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSIDTS=sidts-CjEBLwcBXLN0r9noFf-VU4tRTtHZOnbrU5H-va9z49YiHI3619iCoeG-TuxNAFTBplizEAA; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:2cMJM9u-s-kSBpo_72RzYRGLOf5sVoXg5D3g1m_W1-7sCNUKrpsux3KCoFLhNrmrrLYXB28YaujfLeWGaSnjN1k_fRXdw1fVMx4QXQiNKvGIgsZ_pUO-8dCQ_Fho3efgpRClSuBK1X5IvgksWnK00h3Y6gHxLQ:0YCvTElOnG0RfYko; DOMAIN=accounts.google.com");

	web_add_cookie("NID=514="
		"vzcSrK9LdbRF91cabyBDycjiK4C0QmHUCs4tNR3rbUn4wpKGCCiWlFojTerwXKgtcxiRBGBbiwEMLBkq7TPvS_CMaMGCiW0_RY_yQA1TakGGAmF9yEvQlWnxwvrnROLDCWiubyeYTJKqCwW5SK3BPOyUcYKSlpQ0ZPOVT3wrup9dQZWd8OwFirjVFMeWFZDvvmoaVBS9uw_IgRugrRYQ1QcwPkgz4QvnuPL0zFdMtnaCHy20rplH2ujGBSKTHKqNxi8TeGJFHEj2zXPDW7ZiHHEKb4ek8u4R6lFt5WCGwPSz8uf6Y9NsYZLUq05k38JtMSrogAGxzohtspF2ygqTfAA0HB8d0dknMwogNbjgTWC2F2_EpROWVn2pSJ0AEcjqLSDnn2m_zmQox039wlx7VSYOk4eElqwN8VkSZKZgJK6_uBShlXlKvhBG8UXnAmwLYHUKVwIyNVdk8owL9f1xxeaYifDSW7A6E3HqmjXhNRHcNJBk_LX4K8"
		"dpAElZw-H4_4JHiBTYd-raXiwZDNgYJd1J6nAQLmhU7ntLSo3kEKSoY3qW-rEdfi6k6-nMjkddiiKu8CSIfOJ3VK2vsatJVH_TKAd6oIzuG4j8_dPr0UTEDmf3et52CZwweg2ZuCB95evPMtpH31ujg8xTA5JOJE1Pl97YbsC_SfUNZktm2p4NE3L3W39DA0c1wvWPOTaUv6sqSRxOC7Zt4_-gBfKhTT4oqRLWM_M6-iZgC0SXWqwyj_Qpu7EpAUGTTYra0Xa1eh58G2qRG3cWf3-b6iqzt9-bu6FsYl9qEG-xG_lQBTetMM5rvb6BRVhemeZFFKrd3KjpbrQHzuDyqznsr_hdOgpl29sWkQ9Sj-Rb9ULyTRBULOhONl18hZRXo0aixi-9DDUrdOLwMnbVukNNuvYm8BxH0pjnUCvQ0UCJ2Yu55Ypo4VdDg9RsvJDlfi2iCP4nbnU92HDW4VbiPOJ_fowxUblo5wk6j9EDXOCkwJnGf10h"
		"3JNbz801FhhHCt-k_UAHVd9U_DQwNcwhiFsFnr5R4bOZgGhw1Jpl58xSMt-LFl-T3vbz61QbXMJWqQx7Eh3PTWAD82M-HFYzjvzipyTXR2iZmDf3Sg6CnyLMIoWhP5HKexeASHmJzNxKaqiDjTsC0VATur3Bda8i8E6vMrBJuUKjgvVvuchZU7swA_PP9P14Wb1a3e7RnDb2ESr3INgVvnHWVVv91irz4ZygGAEHix1jzWAipe27Xz0-tifnQ6lPLcYLJ7n8FPHSLuVh4T7Au3ekB5xZI51TWM9tT-LFQRL3Em3exaiXbVFu1QKIT272VLQA4QEvZlZKvJUEfD9aQXn3uaTsVRkLDuctd2DXQ_2_6OYeJGURGf5M964x8REg5Y8o; DOMAIN=accounts.google.com");

	web_add_cookie("SIDCC=AKEyXzXlnK8wGWg5yoH3y4A-fY3h2BH_QXyVdgZUhyLQYkhC_dp6Ko1LIR9hRdamt4obG5N-Hmg; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSIDCC=AKEyXzVODrF8ZLpXcM5JGO4wZ3UAjWFfXT0pg2GryiNt9KMsGypnTqY0m8kfLp-_cXSRRrlN14ri; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSIDCC=AKEyXzUQwiEAulLecZCHnfgNJnEpiwFkQrf2BIGW4eN4nol8Hkm2HrjwNsqWmUzFzBMlIqmnuqk; DOMAIN=accounts.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0eY2hJnht1WMBCgYIARAAGA4SNwF-L9Ir_QkPPq7u0dL0hbfZo6bRKjGZSgBA-176fVEMsE6uJkq0d10F8i5Dn9zr3rMhZtsA3uU", 
		LAST);

	web_custom_request("token_2", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0eY2hJnht1WMBCgYIARAAGA4SNwF-L9Ir_QkPPq7u0dL0hbfZo6bRKjGZSgBA-176fVEMsE6uJkq0d10F8i5Dn9zr3rMhZtsA3uU&scope=https://www.googleapis.com/auth/chromesync", 
		LAST);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=14:KJLub0J3Iy_h3BZzBTh-BIMB4pGPapmXWxAesOjqP2E&cup2hreq=55460f6b083a88e280238991a1ef842f916d2c0cac601bc09af9b77d52d4541a", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"aapbdbdomjkkjkaonfhkkikfgjllcleb\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.2.0.13\"}]},\"ping\":{\"ping_freshness\":\"{1d3e1ab5-3fb5-4b18-acab-5d12188224d9}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"2.0.13\"},{\"appid\":\"cifnddnffldieaamihfkhkdgnbhfmaci\",\"cohort\":\"1::\","
		"\"enabled\":true,\"installdate\":6101,\"installedby\":\"external\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.7d8ec042733b39abfd728bf3969d100d7fc6fbee4369ba231e39dbfd9fa8d9df\"}]},\"ping\":{\"ping_freshness\":\"{f8eac5e6-db64-45a3-b053-9beb977865f2}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"12.1.0.0\"},{\"appid\":\"cjpalhdlnbpafiamejdnhcphjbkeiagm\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6130,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package"
		"\":[{\"fp\":\"1.ed1e7286aba0beea0b01a9c7411be2a7bb1413922665570049c7b97c2c7f5e3b\"}]},\"ping\":{\"ping_freshness\":\"{670ae667-3a3b-4766-b667-f71e266bf9a4}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"1.57.0\"},{\"appid\":\"dahfohiipmpcppjbablgfoggbogdmddp\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6136,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.0.1.3\"}]},\"ping\":{\"ping_freshness\":\"{402cef3a-0815-4f02-95f6-2aff100ab025}\",\"rd\":6336},"
		"\"updatecheck\":{},\"version\":\"0.1.3\"},{\"appid\":\"dhdgffkkebhmkfjojejmpbldmpobfkfo\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.0f931ef68b73d54c7badb15ce19ffe79a9ebb6489ecf86a808cd57b3874404d2\"}]},\"ping\":{\"ping_freshness\":\"{ce07c3b4-912f-424a-bcf2-3b9303155da7}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"5.1.1\"},{\"appid\":\"eimadpbcbfnmbkopoojfekhnkhdbieeh\",\"cohort\":\"1::\",\""
		"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.32f473cfee58b6e31e3db6bc3e2b3049094b97a60219fa3f32a0c999a4472f08\"}]},\"ping\":{\"ping_freshness\":\"{32a6431b-adc5-4cfa-8fee-eb58f68a07f0}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"4.9.84\"},{\"appid\":\"ekcgkejcjdcmonfpmnljobemcbpnkamh\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":["
		"{\"fp\":\"1.ef25c83ebbbbc60f8eba85ffaf42689bbf5f645dd49c5c0ebb2af9d0c33fd6e0\"}]},\"ping\":{\"ping_freshness\":\"{358c833c-e9d0-47b9-a17a-e953914aa67c}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"4.8.9.2\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"external\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.378723490592c0627ac18a287f9a9cb74970c3c6e10a177c322282bfc1d01e01\"}]},\"ping\":{\"ping_freshness\""
		":\"{bb301488-f3db-4aea-a0c3-17aaa68e9f2c}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"1.75.4\"},{\"appid\":\"hnmpcagpplmpfojmgmnngilcnanddlhb\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6325,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.3.4.9\"}]},\"ping\":{\"ping_freshness\":\"{d24a2ce1-fc78-4a2a-9192-96e397e76806}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"3.4.9\"},{\"appid\":\"imielmggcccenhgncmpjlehemlinhjjo\",\"cohort\":\"1::\",\""
		"enabled\":true,\"installdate\":6197,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.3.1.4\"}]},\"ping\":{\"ping_freshness\":\"{4c649de7-5d9d-4254-84d4-9ca324d309ea}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"3.1.4\"},{\"appid\":\"llbdoljkknpjgfcnbnoiehjcgancpjmd\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0\"}]},\"ping\":{\"ping_freshness\":\""
		"{276112c3-bd2b-428d-9751-8319bf1e7743}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"1.0.0\"},{\"appid\":\"lpcaedmchfhocbbapmcbpinfpgnhiddi\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.45e2dfda4f88df24f554a20ce6ffade416a80632d701f1a4f92864257194823b\"}]},\"ping\":{\"ping_freshness\":\"{88de6b1b-2ed2-41ba-9e0a-73944e060f70}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"4.24172.540.1\"},{\"appid"
		"\":\"mnjggcdmjocbbbhaepdhchncahnbgone\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.54b6d67a7f14752720bd6432b53c85f7a4fcad246635217e59af1eb576ec95f2\"}]},\"ping\":{\"ping_freshness\":\"{ec8520ce-65a0-4692-8351-3a20f4738667}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"5.5.9\"},{\"appid\":\"mooikfkahbdckldjjndioackbalphokd\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6326,\"installedby\""
		":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.3.17.2\"}]},\"ping\":{\"ping_freshness\":\"{288c5b9f-32db-4b1d-b1e0-d26eb3832eb8}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"3.17.2\"},{\"appid\":\"ngpampappnmepgilojfohadhhmbhlaek\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"external\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.448596128b87ed519e54c697db46cbee7eb6888988bb865bdc42a1c72fb60cd9\"}]},\"ping\":{\"ping_freshness\""
		":\"{99587cdc-f120-4f82-bb2d-56986b81f3e9}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"6.42.8.2\"},{\"appid\":\"nmkinhboiljjkhaknpaeaicmdjhagpep\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6318,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.37.1.3.0\"}]},\"ping\":{\"ping_freshness\":\"{9f8c1ef7-6dc9-4dc9-8787-fd6184e81948}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"37.1.3.0\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"cohort\":\"1:"
		":\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"other\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.6\"}]},\"ping\":{\"ping_freshness\":\"{442e34ec-691c-4393-97a0-35c9944bcc89}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"1.0.0.6\"},{\"appid\":\"ponfpcnoihfmfllpaingbgckeeldkhle\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.40f3aba7ea8f7ed363a0020f829b6ee2637e42eac2f35edbdf91743a3064a1ca\"}]},\"ping\":{\"ping_freshness\":\"{b6b7ded2-cf02-41b9-bfc9-ccfa4ca512e0}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"2.0.124.2\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.19045.4046\"},\"prodchannel\":\"beta\",\"prodversion\":\"125.0.6422.26\",\"protocol\":\"3.1\",\"requestid\":\"{f3b9fec3-f547-49e6-b9ae-68eeec52ed9c}\",\"sessionid\":\"{b453fcf6-a144-4793-b537-90b07e586908}\",\"updaterchannel\":\"beta\",\"updaterversion\":\"125.0.6422.26\"}}", 
		LAST);

	web_url("crx", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromecrx&prodchannel=beta&prodversion=125.0.6422.26&lang=en-US&acceptformat=crx3,puff&x=id%3Daieoplapobidheellikiicjfpamacpfd%26v%3D0.0.0.0%26installedby%3Dinternal%26uc&x=id%3Dgfenjblodoldnbiddmggcbkcapiolbig%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D14%2526e%253D1&x=id%3Dhflefjhkfeiaignkclmphmokmmbhbhik%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D14%2526e%253D1", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
