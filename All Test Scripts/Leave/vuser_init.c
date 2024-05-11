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
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://darkreader.org/blog/posts.json", "Referer=", ENDITEM, 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0eY2hJnht1WMBCgYIARAAGA4SNwF-L9Ir_QkPPq7u0dL0hbfZo6bRKjGZSgBA-176fVEMsE6uJkq0d10F8i5Dn9zr3rMhZtsA3uU", 
		LAST);

	web_custom_request("collect", 
		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j101&a=1764978226&t=pageview&_s=1&dl=chrome-extension%3A%2F%2Fllbdoljkknpjgfcnbnoiehjcgancpjmd%2F_generated_background_page.html&dp=%2Fbackground&ul=en-us&de=UTF-8&sd=24-bit&sr=1536x864&vp=&je=0&_u=QACAAEABAAAAACAEI~&jid=973551092&gjid=1495181844&cid=830389759.1694837545&tid=UA-169009641-3&_gid=1307316543.1704256953&_r=1&_slc=1&z=653207630", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		LAST);

	web_custom_request("token_2", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0eY2hJnht1WMBCgYIARAAGA4SNwF-L9Ir_QkPPq7u0dL0hbfZo6bRKjGZSgBA-176fVEMsE6uJkq0d10F8i5Dn9zr3rMhZtsA3uU&scope=https://www.googleapis.com/auth/chromesync", 
		LAST);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=14:4vkH8h8KqY8OeKnYJ-gVQ4aYeYhCyUJrgXWq_5Jbk5E&cup2hreq=ca0a613abce141051beb7811d467687d7e6ce510c33e0c6242bc4755dc96edba", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"aapbdbdomjkkjkaonfhkkikfgjllcleb\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.2.0.13\"}]},\"ping\":{\"ping_freshness\":\"{e05f4400-1629-40c2-a3b1-6df17f664c18}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"2.0.13\"},{\"appid\":\"cifnddnffldieaamihfkhkdgnbhfmaci\",\"cohort\":\"1::\","
		"\"enabled\":true,\"installdate\":6101,\"installedby\":\"external\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.7d8ec042733b39abfd728bf3969d100d7fc6fbee4369ba231e39dbfd9fa8d9df\"}]},\"ping\":{\"ping_freshness\":\"{70e782c5-0e73-48c8-b4a4-eac028d6e06c}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"12.1.0.0\"},{\"appid\":\"cjpalhdlnbpafiamejdnhcphjbkeiagm\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6130,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package"
		"\":[{\"fp\":\"1.ed1e7286aba0beea0b01a9c7411be2a7bb1413922665570049c7b97c2c7f5e3b\"}]},\"ping\":{\"ping_freshness\":\"{4202b966-2158-4319-b2c7-47d1f6c667e4}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"1.57.0\"},{\"appid\":\"dahfohiipmpcppjbablgfoggbogdmddp\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6136,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.0.1.3\"}]},\"ping\":{\"ping_freshness\":\"{d2224b4c-0260-4e67-9c0f-2bf4148513f9}\",\"rd\":6336},"
		"\"updatecheck\":{},\"version\":\"0.1.3\"},{\"appid\":\"dhdgffkkebhmkfjojejmpbldmpobfkfo\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.0f931ef68b73d54c7badb15ce19ffe79a9ebb6489ecf86a808cd57b3874404d2\"}]},\"ping\":{\"ping_freshness\":\"{25b933c0-6104-4af4-b640-890066eebefc}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"5.1.1\"},{\"appid\":\"eimadpbcbfnmbkopoojfekhnkhdbieeh\",\"cohort\":\"1::\",\""
		"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.32f473cfee58b6e31e3db6bc3e2b3049094b97a60219fa3f32a0c999a4472f08\"}]},\"ping\":{\"ping_freshness\":\"{beab7af1-475c-407a-943f-555a0891bc8f}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"4.9.84\"},{\"appid\":\"ekcgkejcjdcmonfpmnljobemcbpnkamh\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":["
		"{\"fp\":\"1.ef25c83ebbbbc60f8eba85ffaf42689bbf5f645dd49c5c0ebb2af9d0c33fd6e0\"}]},\"ping\":{\"ping_freshness\":\"{6a35dde0-5bd8-4a68-b79b-df0780ff58f0}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"4.8.9.2\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"external\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.378723490592c0627ac18a287f9a9cb74970c3c6e10a177c322282bfc1d01e01\"}]},\"ping\":{\"ping_freshness\""
		":\"{400341ae-bfc5-48af-9ab9-7f6f0e125623}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"1.75.4\"},{\"appid\":\"hnmpcagpplmpfojmgmnngilcnanddlhb\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6325,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.3.4.9\"}]},\"ping\":{\"ping_freshness\":\"{e2c0896d-3e9c-4460-b0e1-30af9114977c}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"3.4.9\"},{\"appid\":\"imielmggcccenhgncmpjlehemlinhjjo\",\"cohort\":\"1::\",\""
		"enabled\":true,\"installdate\":6197,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.3.1.4\"}]},\"ping\":{\"ping_freshness\":\"{55ab890c-524e-4eee-8edb-5a3f65460b85}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"3.1.4\"},{\"appid\":\"llbdoljkknpjgfcnbnoiehjcgancpjmd\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0\"}]},\"ping\":{\"ping_freshness\":\""
		"{c992b618-a0a4-46cd-9a1c-d92b0e79d202}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"1.0.0\"},{\"appid\":\"lpcaedmchfhocbbapmcbpinfpgnhiddi\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.45e2dfda4f88df24f554a20ce6ffade416a80632d701f1a4f92864257194823b\"}]},\"ping\":{\"ping_freshness\":\"{841c0ab2-450f-4b3c-8643-dcfba7e6a146}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"4.24172.540.1\"},{\"appid"
		"\":\"mnjggcdmjocbbbhaepdhchncahnbgone\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.54b6d67a7f14752720bd6432b53c85f7a4fcad246635217e59af1eb576ec95f2\"}]},\"ping\":{\"ping_freshness\":\"{0c8f3bec-f70f-4634-bf5e-2871ce90eaa7}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"5.5.9\"},{\"appid\":\"mooikfkahbdckldjjndioackbalphokd\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6326,\"installedby\""
		":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.3.17.2\"}]},\"ping\":{\"ping_freshness\":\"{ed9aeb93-3b90-4f67-9bf3-a15b34f7d7e3}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"3.17.2\"},{\"appid\":\"ngpampappnmepgilojfohadhhmbhlaek\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"external\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.448596128b87ed519e54c697db46cbee7eb6888988bb865bdc42a1c72fb60cd9\"}]},\"ping\":{\"ping_freshness\""
		":\"{99521af4-ae12-4f46-9bf4-17c98093f3e6}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"6.42.8.2\"},{\"appid\":\"nmkinhboiljjkhaknpaeaicmdjhagpep\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6318,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.37.1.3.0\"}]},\"ping\":{\"ping_freshness\":\"{ffe4db36-1a9f-4d3f-a9a3-1e8bc096ff30}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"37.1.3.0\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"cohort\":\"1:"
		":\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"other\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.6\"}]},\"ping\":{\"ping_freshness\":\"{ee58de04-3ebc-4cc9-af67-ac6226833046}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"1.0.0.6\"},{\"appid\":\"ponfpcnoihfmfllpaingbgckeeldkhle\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.40f3aba7ea8f7ed363a0020f829b6ee2637e42eac2f35edbdf91743a3064a1ca\"}]},\"ping\":{\"ping_freshness\":\"{bd377d95-7512-4f60-8028-46c6b801197b}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"2.0.124.2\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.19045.4046\"},\"prodchannel\":\"beta\",\"prodversion\":\"125.0.6422.26\",\"protocol\":\"3.1\",\"requestid\":\"{0f71a2cf-1ada-4d12-8b61-7a3410b266c2}\",\"sessionid\":\"{4565e485-5036-42ef-a813-bad6ecac807b}\",\"updaterchannel\":\"beta\",\"updaterversion\":\"125.0.6422.26\"}}", 
		LAST);

	web_url("crx", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromecrx&prodchannel=beta&prodversion=125.0.6422.26&lang=en-US&acceptformat=crx3,puff&x=id%3Daieoplapobidheellikiicjfpamacpfd%26v%3D0.0.0.0%26installedby%3Dinternal%26uc&x=id%3Dgfenjblodoldnbiddmggcbkcapiolbig%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D14%2526e%253D1&x=id%3Dhflefjhkfeiaignkclmphmokmmbhbhik%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D14%2526e%253D1", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
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

	web_add_cookie("SIDCC=AKEyXzWu1g3lQX8d3D0Ae7D8yDdMbac04FoMtf8XPTdu_jX4CwcErY4HgphyoJDo-Ewb-ibE5mY; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSIDCC=AKEyXzW3J4z9PBCkD36kU6zi86D0_e_KSPDt_EiQIUt0cdTU3iGww5sPYe_Abold-C2msvVGj0lc; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSIDCC=AKEyXzXYvX2y-5mr0TOplW4BHfH3i5OdvsTPyt1TL7TmnqzrhpsVJhBRaUDbYtf1uZx3G6fQs5M; DOMAIN=accounts.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	web_add_cookie("IDE=AHWqTUkmqF680NLEmaIjruAKeBUZP6zfamS2m3EfBqmYvC0E8mGaWqLSsGxmInmF; DOMAIN=stats.g.doubleclick.net");

	web_custom_request("collect_2", 
		"URL=https://stats.g.doubleclick.net/j/collect?t=dc&aip=1&_r=3&v=1&_v=j101&tid=UA-169009641-3&cid=830389759.1694837545&jid=973551092&gjid=1495181844&_gid=1307316543.1704256953&_u=QACAAEAAAAAAACAEI~&z=1529893232", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		LAST);

//	web_custom_request("issuetoken", 
//		"URL=https://oauthaccountmanager.googleapis.com/v1/issuetoken", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=", 
//		"Snapshot=t25.inf", 
//		"Mode=HTML", 
//		"Body=force=false&response_type=token&scope=https://www.googleapis.com/auth/cclog+https://www.googleapis.com/auth/client_channel+https://www.googleapis.com/auth/memento&enable_granular_permissions=false&client_id=192748556389-k5lj2ak6j74mo13ulslbkqkrd8d6b1bh.apps.googleusercontent.com&lib_ver=125.0.6422.26&release_channel=beta&origin=lpcaedmchfhocbbapmcbpinfpgnhiddi&device_id=8e1fb12f-cc76-4a0d-baaa-bdc9af0979ac&device_type=chrome", 
//		LAST);

//	web_custom_request("command", 
//		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=GWs9AqL0LfltgSszeu153Q%3D%3D", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=application/vnd.google.octet-stream-compressible", 
//		"Referer=", 
//		"Snapshot=t26.inf", 
//		"ContentEncoding=gzip", 
//		"Mode=HTML", 
//		"EncType=application/octet-stream", 
//		"BodyBinary=\n\\x15gmredwanjoy@gmail.com\\x10c\\x18\\x02*\\xEA \\x12\\x02\\x10\\x01\\x18\\x012\\x99\\x01\\x08\\x88\\x81\\x02\\x12\\x82\\x01 \\x00\\x92\\x01}\n4\n\\x0Echrome_sync_bm\\x12\\x0551!bm\\x1A\\x12\t\r%\\xA6\\x10\\xDA\\x17\\x06\\x00\\x11\r%\\xA6\\x10\\xDA\\x17\\x06\\x00)\\x95`\\xA8\\x10\\xDA\\x17\\x06\\x00\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x80\\x02\\xE3\\x0B\\xDA\\x17\\x06\\x00\\x11\\x80\\x02\\xE3\\x0B\\xDA\\x17\\x06\\x00)\\xEB\""
//		"\\xA6\\x10\\xDA\\x17\\x06\\x000\\x80\\x85\\x8C\\xDF\\xA0\\xFB\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\xC6\\xA6\\x02\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n\\x16annotation_chrome_sync\\x12\\x0551!pf\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)\\x80\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x00\t"
//		"\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)O\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xE7\\x02\\x08\\xB1\\xE6\\x02\\x12\\xD0\\x02 \\x00\\x92\\x01\\xCA\\x02\n\\x80\\x02\n\\x0Echrome_sync_pw\\x12\\x0551!pw\\x1A\\x12\t`\\xF4\\xAB|\\xDB\\x17\\x06\\x00\\x11`\\xF4\\xAB|\\xDB\\x17\\x06\\x00\"1\t\\x85Nzx\\xDB\\x17\\x06\\x00\\x10\\x01\\x19\\xF0\\x04j\\xCFJ\\xE5\\xD0^ \\x01*\\x1951!pw"
//		":1043567890482008565\"1\t\\x85Nzx\\xDB\\x17\\x06\\x00\\x10\\x01\\x19\\xF0\\x04j\\xCFJ\\xE5\\xD0^ \\x01*\\x1951!pw:1043567890482008565\"1\t\\x85Nzx\\xDB\\x17\\x06\\x00\\x10\\x01\\x19\\xF0\\x04j\\xCFJ\\xE5\\xD0^ \\x01*\\x1951!pw:1043567890482008565\"1\t\\x85Nzx\\xDB\\x17\\x06\\x00\\x10\\x01\\x19\\xF0\\x04j\\xCFJ\\xE5\\xD0^ \\x01*\\x1951!pw:1043567890482008565)\\x9D}\\xAE|\\xDB\\x17\\x06\\x00\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t"
//		"\\xE1v\\xDB\\x17\\x06\\x00)O\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x01(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\xCF\\xF3\\x03\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n\\x16annotation_chrome_sync\\x12\\x0551!ap\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)r\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x00\t"
//		"\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)O\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xC1\\x01\\x08\\xF1\\xF7\\x01\\x12\\xAA\\x01 \\x00\\x92\\x01\\xA4\\x01\n[\n\\x16annotation_chrome_sync\\x12\\x0551!af\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\"\\x14\txQzx\\xDB\\x17\\x06\\x00\\x10\\x01\\x19/~\\\\\\xBD\\xC2\\x11\\x83\\x83)n\\xF2\\xAB|"
//		"\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)O\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x01(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\xFA\\xC1\\x02\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n\\x16annotation_chrome_sync\\x12\\x0551!tm\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t"
//		"\\xE1v\\xDB\\x17\\x06\\x00)\\x98\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)O\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\xF7\\xF7\\x02\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n\\x16annotation_chrome_sync\\x12\\x0551!ex\\x1A\\x12\t\\x00\t"
//		"\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)v\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)O\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\xA2\\xB4\\x05\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n"
//		"\\x16annotation_chrome_sync\\x12\\x0551!se\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)\\x8A\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)O\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00"
//		"(\\x000\\x008\\x00@\\x002\\xC1\\x01\\x08\\xC7\\x87\\x03\\x12\\xAA\\x01 \\x00\\x92\\x01\\xA4\\x01\n[\n\\x16annotation_chrome_sync\\x12\\x0551!ss\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\"\\x14\t\\x9D\\xE2\\x9E|\\xDB\\x17\\x06\\x00\\x10\\x03\\x19\\xA1\\x03\\xAAe\\x9Bi#\\xA4)\\x95\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t"
//		"\\xE1v\\xDB\\x17\\x06\\x00)O\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x05(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\xEC\\xF9\\x02\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n\\x16annotation_chrome_sync\\x12\\x0551!pp\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)Z\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x00\t"
//		"\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)O\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\xE8\\xA9\\x06\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n\\x16annotation_chrome_sync\\x12\\x0551!as\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)\\\\\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03\nE\n"
//		"\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)O\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\x9F\\xEF\\x05\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n\\x16annotation_chrome_sync\\x12\\x0551!es\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)x\\xF2\\xAB|"
//		"\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)O\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\xEB\\x95\t\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n\\x16annotation_chrome_sync\\x12\\x0551!dd\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t"
//		"\\xE1v\\xDB\\x17\\x06\\x00)~\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)O\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\xAC\\xB4\n\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n\\x16annotation_chrome_sync\\x12\\x0551!dc\\x1A\\x12\t\\x00\t"
//		"\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)t\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)O\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\x99\\x01\\x08\\x9A\\xB7\t\\x12\\x82\\x01 \\x00\\x92\\x01}\n4\n\\x0Echrome_sync_di\\x12\\x0551"
//		"!di\\x1A\\x12\t`\\xF4\\xAB|\\xDB\\x17\\x06\\x00\\x11`\\xF4\\xAB|\\xDB\\x17\\x06\\x00)\\x90}\\xAE|\\xDB\\x17\\x06\\x00\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)O\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\xE1\\xFC\t\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n\\x16annotation_chrome_sync\\x12\\x0551"
//		"!pr\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)\\x83\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)O\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\x94\\x8B\\x19\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n"
//		"\\x16annotation_chrome_sync\\x12\\x0551!rl\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)\\x85\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)O\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00"
//		"(\\x000\\x008\\x00@\\x002\\x99\\x01\\x08\\xFC\\xDE$\\x12\\x82\\x01 \\x00\\x92\\x01}\n4\n\\x0Echrome_sync_st\\x12\\x0551!st\\x1A\\x12\t`\\xF4\\xAB|\\xDB\\x17\\x06\\x00\\x11`\\xF4\\xAB|\\xDB\\x17\\x06\\x00)\\xB7}\\xAE|\\xDB\\x17\\x06\\x00\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)O\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00"
//		"(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\xC9\\x8B)\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n\\x16annotation_chrome_sync\\x12\\x0551!wa\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)\\x9A\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)O\\xF2\\xAB|"
//		"\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\x81\\x01\\x08\\x91\\xEB:\\x12k \\x00\\xAA\\x01f\n"
//		"\\x0B\\x08\\xAA\\xA0\\xE8\\xB1\\x06\\x10\\xA0\\xB1\\xAEB\\x12\\x11\\x08\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\x01\\x10\\x98\\x8C\\xEB\\xDC\\x03\\x1A\\x0C\\x08\\xE4\\xFD\\xE2\\xB1\\x06\\x10\\x80\\xAA\\xFA\\x9D\\x03*\\x0C\\x08\\xB7\\xA0\\xE8\\xB1\\x06\\x10\\xC8\\x84\\xCF\\xA2\\x022\\x0C\\x08\\xE5\\xFD\\xE2\\xB1\\x06\\x10\\x90\\xB2\\xEA\\xBE\\x01"
//		":\\x0C\\x08\\xE5\\xA0\\xE8\\xB1\\x06\\x10\\xA8\\xAA\\xEA\\xBE\\x01B\\x0C\\x08\\xE5\\xA0\\xE8\\xB1\\x06\\x10\\xC0\\xC2\\xD9\\xCE\\x01*\\x0E\\x10\\x00\\x18\\x01 \\x06(\\x000\\x008\\x00@\\x002\\x83\\x01\\x08\\x8A\\x91?\\x12m \\x00\\x92\\x01G\nE\n\\x16annotation_chrome_sync\\x12\\x0551!cn\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)X\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03\\xA2\\x01\\x1E\n"
//		"\\x00\\x1A\\x0C\\x08\\xE5\\xA0\\xE8\\xB1\\x06\\x10\\xA0\\xED\\xEA\\xCE\\x01\"\\x0C\\x08\\x91\\xD6\\x94\\xA8\\x06\\x10\\x88\\x91\\x98\\xAF\\x01*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\xCA\\xAA=\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n\\x16annotation_chrome_sync\\x12\\x0551!sg\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)\\x88\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03\nE\n"
//		"\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)O\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\x99\\x01\\x08\\xAB\\xD26\\x12\\x82\\x01 \\x00\\x92\\x01}\n4\n\\x0Echrome_sync_wk\\x12\\x0551!wk\\x1A\\x12\t`\\xF4\\xAB|\\xDB\\x17\\x06\\x00\\x11`\\xF4\\xAB|\\xDB\\x17\\x06\\x00)\\xBA}\\xAE|\\xDB\\x17\\x06\\x00\nE\n"
//		"\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x00\t\\xE1v\\xDB\\x17\\x06\\x00\\x11\\x00\t\\xE1v\\xDB\\x17\\x06\\x00)O\\xF2\\xAB|\\xDB\\x17\\x06\\x000\\x80\\x92\\x84\\xB7\\xB7\\xFB\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002 \\x08\\xAF\\xD9E\\x12\n \\x00\\x80\\x01\\x97\\x98\\xC0\\x96\\xF51*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002J\\x08\\x81\\xF5\\x02\\x124 "
//		"\\x00\\x88\\x01\\xBF\\xA0\\x95\\xF5\\xD5\\x92\\xD3\\xB4\\x01\\xC2\\x01$0182390c-fec6-51b0-82b7-bb284b448a9b*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00@\\x00H\\x0CP\\x00:%z00000154-0576-7ebf-0000-0000570ba374R`\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\x91\\xEB:\n\\x04\\x18\\x91\\xEB:\n\\x04\\x18\\xF1\\xF7\\x01\n\\x04\\x18\\x91\\xEB:\n\\x04\\x18\\x91\\xEB:\n\\x04\\x18\\x91\\xEB:\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\n"
//		"\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\x91\\xEB:\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xB1\\xE6\\x02\\x10\\x01\\x18\\x00 \\x00Z}\n{\\x12yChrome WIN 125.0.6422.26 (5eaffa90a0b0c7135378691126a82a4406b2e044-refs/branch-heads/6422@{#574}) channel(beta),gzip(gfe)b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x01", 
//		LAST);

	web_custom_request("v1:GetModels", 
		"URL=https://optimizationguide-pa.googleapis.com/v1:GetModels?key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/x-protobuf", 
		"BodyBinary=\n\n\\x08\\x02\\x10\\xC6\\xB2\\xE1\\xA0\\x06 \\x0F\n\n\\x08\t\\x10\\xF3\\x82\\xF5\\xB0\\x06 \\x0F\n\n\\x08\r\\x10\\xF1\\xE9\\x9C\\x9E\\x06 \\x0F\ng\\x08\\x0F\\x10\\x05 \\x0F2_\nWtype.googleapis.com/google.internal.chrome.optimizationguide.v1.PageTopicsModelMetadata\\x12\\x04\\x08\\x020\\x02\ng\\x08\\x10 \\x0F2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\n\n\\x08\\x14\\x10\\xB1\\xED\\xBE\\xB1\\x06 \\x0F\n"
		"g\\x08\\x15 \\x0F2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\ng\\x08\\x17 \\x0F2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\n\n\\x08\\x18\\x10\\xA3\\x86\\xC0\\xB0\\x06 \\x0F\n\n\\x08\\x19\\x10\\x83\\xF9\\x99\\xB1\\x06 \\x0F\n\n\\x08\\x1A\\x10\\xC1\\xFC\\xEB\\xA8\\x06 \\x0F\ng\\x08\\x1B \\x0F2a\nYtype.googleapis.com/"
		"google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\n{\\x08\\x1F\\x10\\xCF\\x85\\xAD\\xA6\\x06 \\x0F2o\nitype.googleapis.com/google.internal.chrome.optimizationguide.v1.HistoryClustersModuleRankingModelMetadata\\x12\\x02\\x08\\x02\nm\\x08 \\x10\\xEC\\xB6\\xAA\\xFA\\x08 \\x0F2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\nN\\x08\"\\x10\\x86\\x82\\xB3\\xA5\\x06 \\x0F2B\n"
		"<type.googleapis.com/lens.prime.csc.VisualSearchModelMetadata\\x12\\x02\\x10\\x02\\x18\\x06*\\x05en-US2\\x02\\x08\\x06", 
		LAST);

	return 0;
}
