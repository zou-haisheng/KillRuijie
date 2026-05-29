#include <windows.h>
#include <iostream>
#include "RuijieCore.h"
using namespace std;

void kill_ruijie() {
    RuijieCore core;
    cout << "正在关闭锐捷客户端..." << endl;
    
    core.killProcess("RG-Client.exe");
    core.killProcess("RuijieService.exe");
    core.killProcess("RuiJieSupplicant.exe");
    
    cout << "✅ 锐捷客户端已强制关闭！" << endl;
}