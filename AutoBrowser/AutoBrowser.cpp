// AutoBrowser.cpp: definiuje punkt wejścia dla aplikacji.
//

#include "AutoBrowser.h"
#include "Browser.hpp"


using namespace std;

#include <iostream>
#include <fstream>
#include <string>

#include <filesystem>

using std::cout; using std::cin;
using std::endl; using std::string;
using std::filesystem::current_path;

#define SKIP_PEER_VERIFICATION

int main()
{
	//set up a browser instance
	Browser br{};
	//you can add a user-agent this way
	 // br.adduseragent("Mozilla/5.0 (X11; FreeBSD x86_64; rv:17.0) Gecko/17.0 Firefox/17.0");
 //   br.set_verbose(true);

    //if you give no string to this function you will see the cookie output on the screen
//    br.set_cookiejar();

    //but if you give it a string it will save the cookie in the file "my_cookies" for example
 //   br.set_cookiejar("/home/raptor/my_cookies");

    //this function tells the browser to follow redirections
 //   br.set_handle_redirect(true);

    //this function is to use gzip compression
 //   br.set_handle_gzip(true);

    //this function is for a better handling of ssl
 //   br.set_handle_ssl(true);
    map <std::string, std::string> sec_ch_ua;
    sec_ch_ua["sec-ch-ua"] = "\"Chromium\";v=\"104\", \" Not A;Brand\";v=\"99\", \"Google Chrome\";v=\"104\"";

    map <std::string, std::string> viewport_width;
    viewport_width["viewport-width"] = "1920";

    map <std::string, std::string> sec_ch_ua_mobile;
    sec_ch_ua_mobile["sec-ch-ua-mobile"] = "?0";

    map <std::string, std::string> x_box_id;
    x_box_id["x-box-id"] = "dKyMtQIVSx-YCp8qbHqxyw==QF9nzJVZQlCB3_3j9GR37w==";

    map <std::string, std::string> accept;
    accept["accept"] = "application/vnd.opbox-web.subtree+json";

    map <std::string, std::string> sec_ch_ua_arch;
    sec_ch_ua_arch["sec-ch-ua-arch"] = "x86";

    map <std::string, std::string> dpr;
    dpr["dpr"] = "1";

    map <std::string, std::string> sec_ch_ua_full_version_list;
    sec_ch_ua_full_version_list["sec-ch-ua-full-version-list"] = "\"Chromium\";v=\"104.0.5112.81\", \" Not A;Brand\";v=\"99.0.0.0\", \"Google Chrome\";v=\"104.0.5112.81\"";

    map <std::string, std::string> sec_ch_ua_platform;
    sec_ch_ua_platform["sec-ch-ua-platform"] = "Windows";

    map <std::string, std::string> sec_ch_ua_site;
    sec_ch_ua_site["sec-ch-ua-site"] = "same-origin";

    map <std::string, std::string> sec_fetch_mode;
    sec_fetch_mode["sec-fetch-mode"] = "cors";

    map <std::string, std::string> sec_fetch_dest;
    sec_fetch_dest["sec-fetch-dest"] = "empty";

    map <std::string, std::string> accept_encoding;
    accept_encoding["accept-encoding"] = "gzip, deflate, br";

    map <std::string, std::string> accept_language;
    accept_language["accept-language"] = "pl-PL,pl;q=0.9";
    
    br.addheaders(sec_ch_ua);
    br.addheaders(viewport_width);
    br.addheaders(sec_ch_ua_mobile);
    br.addheaders(x_box_id);
    br.addheaders(accept);
    br.addheaders(sec_ch_ua_arch);
    br.addheaders(dpr);
    br.addheaders(sec_ch_ua_full_version_list);
    br.addheaders(sec_ch_ua_platform);
    br.addheaders(sec_ch_ua_site);
    br.addheaders(sec_fetch_mode);
    br.addheaders(sec_fetch_dest);
    br.addheaders(accept_encoding);
    br.addheaders(accept_language);

    br.open("https://allegro.pl/logowanie");
    auto cookies = br.getcookies();

   // br.set_cookie()

    return 0;
}
 