#pragma once

#include <string>
#include <vector>
#include <EAWebKit\EAWebKit.h>

std::string getExePath();
std::string replaceAll(std::string str, const std::string& from, const std::string& to);

int getSystemFonts(std::vector<std::string>& fonts);
int add_ttf_font(EA::WebKit::EAWebKitLib* wk, const char* ttfFile);
int init_system_fonts(EA::WebKit::EAWebKitLib* wk);