#include <windows.h>
#include <iostream>
#include <string>
using namespace std;

void exit_jiyu_fullscreen() {
    cout << "正在尝试退出极域全屏..." << endl;
    
    // 方法1：强制结束极域常见进程
    system("taskkill /f /im StudentMain.exe >nul 2>&1");
    system("taskkill /f /im TeachAgent.exe >nul 2>&1");
    system("taskkill /f /im Student.exe >nul 2>&1");
    system("taskkill /f /im Jiyu.exe >nul 2>&1");
    
    // 方法2：模拟热键
    keybd_event(VK_ESCAPE, 0, 0, 0);
    keybd_event(VK_ESCAPE, 0, KEYEVENTF_KEYUP, 0);
    Sleep(300);
    
    keybd_event(VK_MENU, 0, 0, 0);
    keybd_event(VK_F4, 0, 0, 0);
    keybd_event(VK_F4, 0, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_MENU, 0, KEYEVENTF_KEYUP, 0);
    
    cout << "✅ 已尝试强制退出极域全屏！" << endl;
    cout << "如果仍无效，请尝试：" << endl;
    cout << "1. Ctrl + Shift + Esc 打开任务管理器结束 StudentMain.exe" << endl;
    cout << "2. 重启电脑" << endl;
    cout << endl;
}