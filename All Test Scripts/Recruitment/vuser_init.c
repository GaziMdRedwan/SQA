/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("posts.json", 
		"URL=https://darkreader.org/blog/posts.json", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_url("netcheck.gif", 
		"URL=https://ssl.gstatic.com/docs/common/netcheck.gif?zx=z10qh145mhwd", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://docs.google.com/", 
		"Snapshot=t2.inf", 
		LAST);

	web_custom_request("collect", 
		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j101&a=435135620&t=pageview&_s=1&dl=chrome-extension%3A%2F%2Fllbdoljkknpjgfcnbnoiehjcgancpjmd%2F_generated_background_page.html&dp=%2Fbackground&ul=en-us&de=UTF-8&sd=24-bit&sr=1536x864&vp=&je=0&_u=QACAAEABAAAAACAEI~&jid=511904000&gjid=1334274961&cid=830389759.1694837545&tid=UA-169009641-3&_gid=1307316543.1704256953&_r=1&_slc=1&z=179715934", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
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

	web_url("crx", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromecrx&prodchannel=beta&prodversion=125.0.6422.26&lang=en-US&acceptformat=crx3,puff&x=id%3Daieoplapobidheellikiicjfpamacpfd%26v%3D0.0.0.0%26installedby%3Dinternal%26uc&x=id%3Dgfenjblodoldnbiddmggcbkcapiolbig%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D14%2526e%253D1&x=id%3Dhflefjhkfeiaignkclmphmokmmbhbhik%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D14%2526e%253D1", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("token_2", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0eY2hJnht1WMBCgYIARAAGA4SNwF-L9Ir_QkPPq7u0dL0hbfZo6bRKjGZSgBA-176fVEMsE6uJkq0d10F8i5Dn9zr3rMhZtsA3uU&scope=https://www.googleapis.com/auth/chromesync", 
		LAST);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=14:wHQ4yG-Owdstmgmo_3hISfE11tF9bgBQxyuPU822_PU&cup2hreq=7b2b751d98fa1d7ea2a44f872b0bb14f59a46d7b62839e30f1c69d60785e382a", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"aapbdbdomjkkjkaonfhkkikfgjllcleb\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.2.0.13\"}]},\"ping\":{\"ping_freshness\":\"{f7ac4f5d-5cd5-44b4-9ecb-3dee5ef499df}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"2.0.13\"},{\"appid\":\"cifnddnffldieaamihfkhkdgnbhfmaci\",\"cohort\":\"1::\","
		"\"enabled\":true,\"installdate\":6101,\"installedby\":\"external\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.7d8ec042733b39abfd728bf3969d100d7fc6fbee4369ba231e39dbfd9fa8d9df\"}]},\"ping\":{\"ping_freshness\":\"{1e5c9119-9280-4d48-85b1-cf63dff897ef}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"12.1.0.0\"},{\"appid\":\"cjpalhdlnbpafiamejdnhcphjbkeiagm\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6130,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package"
		"\":[{\"fp\":\"1.ed1e7286aba0beea0b01a9c7411be2a7bb1413922665570049c7b97c2c7f5e3b\"}]},\"ping\":{\"ping_freshness\":\"{4f73649f-6cf2-41de-809f-dbda8310617e}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"1.57.0\"},{\"appid\":\"dahfohiipmpcppjbablgfoggbogdmddp\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6136,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.0.1.3\"}]},\"ping\":{\"ping_freshness\":\"{53ff8b9a-0e4a-4101-89f5-255db0f0be07}\",\"rd\":6336},"
		"\"updatecheck\":{},\"version\":\"0.1.3\"},{\"appid\":\"dhdgffkkebhmkfjojejmpbldmpobfkfo\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.0f931ef68b73d54c7badb15ce19ffe79a9ebb6489ecf86a808cd57b3874404d2\"}]},\"ping\":{\"ping_freshness\":\"{18f32e39-b35d-4c34-8d31-86ac8745bdae}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"5.1.1\"},{\"appid\":\"eimadpbcbfnmbkopoojfekhnkhdbieeh\",\"cohort\":\"1::\",\""
		"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.32f473cfee58b6e31e3db6bc3e2b3049094b97a60219fa3f32a0c999a4472f08\"}]},\"ping\":{\"ping_freshness\":\"{fcd0dbb8-5cf3-4f3a-8b75-0b43eaf1d2a3}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"4.9.84\"},{\"appid\":\"ekcgkejcjdcmonfpmnljobemcbpnkamh\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":["
		"{\"fp\":\"1.ef25c83ebbbbc60f8eba85ffaf42689bbf5f645dd49c5c0ebb2af9d0c33fd6e0\"}]},\"ping\":{\"ping_freshness\":\"{99e5dce8-a798-4242-ac94-93c16bb2c8bc}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"4.8.9.2\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"external\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.378723490592c0627ac18a287f9a9cb74970c3c6e10a177c322282bfc1d01e01\"}]},\"ping\":{\"ping_freshness\""
		":\"{8f9d894c-19ac-46fc-b217-45f250173af5}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"1.75.4\"},{\"appid\":\"hnmpcagpplmpfojmgmnngilcnanddlhb\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6325,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.3.4.9\"}]},\"ping\":{\"ping_freshness\":\"{df450d9b-b94c-4524-bf31-8e66e7e03a49}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"3.4.9\"},{\"appid\":\"imielmggcccenhgncmpjlehemlinhjjo\",\"cohort\":\"1::\",\""
		"enabled\":true,\"installdate\":6197,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.3.1.4\"}]},\"ping\":{\"ping_freshness\":\"{6666bed2-9c56-4be1-97f9-112a12c92c19}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"3.1.4\"},{\"appid\":\"llbdoljkknpjgfcnbnoiehjcgancpjmd\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0\"}]},\"ping\":{\"ping_freshness\":\""
		"{393629e2-8d14-4bb9-a995-432dd5203826}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"1.0.0\"},{\"appid\":\"lpcaedmchfhocbbapmcbpinfpgnhiddi\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.45e2dfda4f88df24f554a20ce6ffade416a80632d701f1a4f92864257194823b\"}]},\"ping\":{\"ping_freshness\":\"{18b80f4e-dc3e-4b92-8de0-bbfb4f122d0f}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"4.24172.540.1\"},{\"appid"
		"\":\"mnjggcdmjocbbbhaepdhchncahnbgone\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.54b6d67a7f14752720bd6432b53c85f7a4fcad246635217e59af1eb576ec95f2\"}]},\"ping\":{\"ping_freshness\":\"{65cc101f-56df-416b-8022-393165ce575b}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"5.5.9\"},{\"appid\":\"mooikfkahbdckldjjndioackbalphokd\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6326,\"installedby\""
		":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.3.17.2\"}]},\"ping\":{\"ping_freshness\":\"{4691264c-df32-4d0a-8084-6ea5e247992b}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"3.17.2\"},{\"appid\":\"ngpampappnmepgilojfohadhhmbhlaek\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"external\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.448596128b87ed519e54c697db46cbee7eb6888988bb865bdc42a1c72fb60cd9\"}]},\"ping\":{\"ping_freshness\""
		":\"{8136eb38-5b29-46c7-b4b8-3d13abbcfa73}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"6.42.8.2\"},{\"appid\":\"nmkinhboiljjkhaknpaeaicmdjhagpep\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6318,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.37.1.3.0\"}]},\"ping\":{\"ping_freshness\":\"{c0b0a30f-9d6a-4e2c-a390-a24b1f3d10d7}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"37.1.3.0\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"cohort\":\"1:"
		":\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"other\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.6\"}]},\"ping\":{\"ping_freshness\":\"{ac09939e-62fa-4f0c-9a0e-fa93cf84d936}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"1.0.0.6\"},{\"appid\":\"ponfpcnoihfmfllpaingbgckeeldkhle\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.40f3aba7ea8f7ed363a0020f829b6ee2637e42eac2f35edbdf91743a3064a1ca\"}]},\"ping\":{\"ping_freshness\":\"{5c643f4e-78f6-433b-bbd1-ffd23d377c75}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"2.0.124.2\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.19045.4046\"},\"prodchannel\":\"beta\",\"prodversion\":\"125.0.6422.26\",\"protocol\":\"3.1\",\"requestid\":\"{82eb9d0d-5af3-4f3b-9463-ba25d636971a}\",\"sessionid\":\"{14c6688b-e6f9-4816-92aa-29234cd0239b}\",\"updaterchannel\":\"beta\",\"updaterversion\":\"125.0.6422.26\"}}", 
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

	web_add_cookie("SIDCC=AKEyXzXra5O-DaBWiViCnzHd46G2GL2iyOLzD_4FZfI2w3FgmI_YEfWDU-Zyv3_zCc1ZnNY7Hys; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSIDCC=AKEyXzVoVSKhbVjQScZAYzGW_lBGTnMyWslTGHkR6HWye1djuCATFli39IK2I-2NwmZDk5a7XeKm; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSIDCC=AKEyXzWrZUalMoZsWEoBQi6jwQvIooKCAZFp_G8E7AfT9NkVknIOtlwQ_THKMRtV4ab760mMEeQ; DOMAIN=accounts.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	web_custom_request("v1:GetModels", 
		"URL=https://optimizationguide-pa.googleapis.com/v1:GetModels?key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/x-protobuf", 
		"BodyBinary=\n\n\\x08\\x02\\x10\\xC6\\xB2\\xE1\\xA0\\x06 \\x0F\n\n\\x08\t\\x10\\xF3\\x82\\xF5\\xB0\\x06 \\x0F\n\n\\x08\r\\x10\\xF1\\xE9\\x9C\\x9E\\x06 \\x0F\ng\\x08\\x0F\\x10\\x05 \\x0F2_\nWtype.googleapis.com/google.internal.chrome.optimizationguide.v1.PageTopicsModelMetadata\\x12\\x04\\x08\\x020\\x02\ng\\x08\\x10 \\x0F2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\n\n\\x08\\x14\\x10\\xB1\\xED\\xBE\\xB1\\x06 \\x0F\n"
		"g\\x08\\x15 \\x0F2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\ng\\x08\\x17 \\x0F2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\n\n\\x08\\x18\\x10\\xA3\\x86\\xC0\\xB0\\x06 \\x0F\n\n\\x08\\x19\\x10\\x83\\xF9\\x99\\xB1\\x06 \\x0F\n\n\\x08\\x1A\\x10\\xC1\\xFC\\xEB\\xA8\\x06 \\x0F\ng\\x08\\x1B \\x0F2a\nYtype.googleapis.com/"
		"google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\n{\\x08\\x1F\\x10\\xCF\\x85\\xAD\\xA6\\x06 \\x0F2o\nitype.googleapis.com/google.internal.chrome.optimizationguide.v1.HistoryClustersModuleRankingModelMetadata\\x12\\x02\\x08\\x02\nm\\x08 \\x10\\xEC\\xB6\\xAA\\xFA\\x08 \\x0F2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\nN\\x08\"\\x10\\x86\\x82\\xB3\\xA5\\x06 \\x0F2B\n"
		"<type.googleapis.com/lens.prime.csc.VisualSearchModelMetadata\\x12\\x02\\x10\\x02\\x18\\x06*\\x05en-US2\\x02\\x08\\x06", 
		LAST);

	web_add_cookie("IDE=AHWqTUkmqF680NLEmaIjruAKeBUZP6zfamS2m3EfBqmYvC0E8mGaWqLSsGxmInmF; DOMAIN=stats.g.doubleclick.net");

	web_custom_request("collect_2", 
		"URL=https://stats.g.doubleclick.net/j/collect?t=dc&aip=1&_r=3&v=1&_v=j101&tid=UA-169009641-3&cid=830389759.1694837545&jid=511904000&gjid=1334274961&_gid=1307316543.1704256953&_u=QACAAEAAAAAAACAEI~&z=1107761190", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		LAST);

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=beta&milestone=125", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.googletagmanager.com/gtag/js?id=G-D3DXCWV39Y&cx=c&_slc=1", "Referer=", ENDITEM, 
		LAST);

	return 0;
}
