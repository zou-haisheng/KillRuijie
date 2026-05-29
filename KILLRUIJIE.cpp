#include <iostream>
#include <windows.h>
#include "RuijieCore.h"
#include "JIYU.cpp"   // 包含极域功能
using namespace std;

void kill_ruijie();
void resume_ruijie();
void exit_jiyu_fullscreen();

int main() {
    RuijieCore core;
    
    cout << "===========================" << endl;
    cout << "   KillRuijie v3.0 (管理员权限模式)" << endl;
    cout << "===========================" << endl;
    cout << "A. 关闭锐捷客户端" << endl;
    cout << "B. 恢复锐捷客户端" << endl;
    cout << "C. 退出极域全屏模式" << endl;
    cout << "Q. 退出程序" << endl;
    cout << "\n请输入选项: ";

    string str;
    while (cin >> str) {
        if (str == "A" || str == "a") {
            kill_ruijie();
        } else if (str == "B" || str == "b") {
            resume_ruijie();
        } else if (str == "C" || str == "c") {
            exit_jiyu_fullscreen();
        } else if (str == "Q" || str == "q") {
            cout << "程序已退出。" << endl;
            break;
        } else {
            cout << "无效选项，请重新输入！" << endl;
        }
        cout << "\n请输入选项: ";
    }
    return 0;
}}
