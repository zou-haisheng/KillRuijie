#pragma once
#include <windows.h>
#include <string>
#include <iostream>
using namespace std;

class RuijieCore {
public:
    void killProcess(const string& processName);
    void copyFile(const string& src, const string& dest);
    bool fileExists(const string& path);
};

void RuijieCore::killProcess(const string& processName) {
    string cmd = "taskkill /f /im " + processName + " >nul 2>&1";
    system(cmd.c_str());
}

void RuijieCore::copyFile(const string& src, const string& dest) {
    string cmd = "copy /Y \"" + src + "\" \"" + dest + "\" >nul 2>&1";
    system(cmd.c_str());
}

bool RuijieCore::fileExists(const string& path) {
    DWORD dwAttrib = GetFileAttributesA(path.c_str());
    return (dwAttrib != INVALID_FILE_ATTRIBUTES);
}