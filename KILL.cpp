#include <iostream>
#include <string>
#include <windows.h>
#include <cstdio>

using namespace std;

namespace kill {
    class ruijie {
    public:
        char kill_name[100] = "RG-CloudManagerRemote.exe";
        string del[3] = {
            "C:\\Program Files (x86)\\RG-CloudManagerRemote\\install.ini",
            "C:\\Program Files (x86)\\RG-CloudManagerRemote\\Launcher.ini",
            "C:\\Program Files (x86)\\RG-CloudManagerRemote\\version.ini"
        };

        void __del(const string& s) {
            if (!DeleteFileA(s.c_str())) {
                printf("删除失败: %s\n", s.c_str());
            }
        }

        void kill_process() {
            system("taskkill /f /im CMLauncher.exe /t");
            for (int i = 0; i < 3; i++) {
                __del(del[i]);
            }
            printf("锐捷客户端已关闭！\n");
        }
    };

    int main() {
        ruijie rj;
        rj.kill_process();
        return 0;
    }
}

int main() {
    kill::main();
    return 0;
}
