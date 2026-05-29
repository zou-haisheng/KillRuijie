#include <iostream>
#include <string>
#include <windows.h>
#include <cstdio>

using namespace std;

namespace resume {
    class ruijie {
    public:
        string resume_files[3] = {
            "install.ini",
            "Launcher.ini",
            "version.ini"
        };

        void __resume() {
            string target = "C:\\Program Files (x86)\\RG-CloudManagerRemote\\";
            for (int i = 0; i < 3; i++) {
                string cmd = "copy \"" + resume_files[i] + "\" \"" + target + resume_files[i] + "\" /Y";
                if (system(cmd.c_str()) != 0) {
                    printf("恢复失败: %s\n", resume_files[i].c_str());
                }
            }
            printf("锐捷客户端文件已恢复！\n");
        }
    };

    int main() {
        ruijie rj;
        rj.__resume();
        return 0;
    }
}

int main() {
    resume::main();
    return 0;
}
