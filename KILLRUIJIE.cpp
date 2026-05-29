#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

void kill_ruijie();
void resume_ruijie();
void exit_jiyu_fullscreen();

int main() {
    string str;
    cout << "===========================\n";
    cout << "   KillRuijie v3.0 (支持锐捷 + 极域)\n";
    cout << "===========================\n";
    cout << "A. 关闭锐捷客户端\n";
    cout << "B. 恢复锐捷客户端\n";
    cout << "C. 退出极域全屏模式\n";
    cout << "Q. 退出程序\n";
    cout << "请输入选项: ";

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
}