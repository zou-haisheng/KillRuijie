#include <windows.h>
#include <iostream>
#include <string>
#include "RuijieCore.h"
using namespace std;

void resume_ruijie() {
    RuijieCore core;
    cout << "正在恢复锐捷客户端..." << endl;
    
    string basePath = "C:\\Program Files (x86)\\RG-CloudManagerRemote\\";
    
    if (core.fileExists(basePath + "Launcher.ini.bak")) {
        core.copyFile(basePath + "Launcher.ini.bak", basePath + "Launcher.ini");
        cout << "✅ Launcher.ini 恢复成功！" << endl;
    } else {
        cout << "⚠️ 未找到备份文件 (Launcher.ini.bak)" << endl;
    }
    
    cout << "请手动启动锐捷客户端。" << endl;
}
