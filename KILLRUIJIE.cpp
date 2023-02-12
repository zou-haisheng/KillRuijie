#include<iostream>
#include<stdio.h>
#include<windows.h>
using namespace std;

namespace neo
{
	class ruijie{
		public:
			char kill_name[100]="RG-CloudManagerRemote.exe";
			string del[10]={"C:\\Program Files (x86)\\RG-CloudManagerRemote\\install.ini",
				        "C:\\Program Files (x86)\\RG-CloudManagerRemote\\Launcher.ini",
			            "C:\\Program Files (x86)\\RG-CloudManagerRemote\\version.ini"};
			string resume[10]={"install.ini",
						   "Laucher.ini",
						   "version.ini"};
			int __del(string s)
			{
				DeleteFile(s.c_str());
			}
			void kill_process(char task_name[])
			{
				system("taskkill /f /im CMLauncher.exe /t");
				for(int i=0;i<3;i++) __del(del[i].c_str());
			}
			void __resume()
			{
				for(int i=0;i<3;i++) system(("copy "+resume[i]+" C:\\Program Files (x86)\\RG-CloudManagerRemote").c_str());
			}
	};

	int main()
	{
		printf("欢迎来到KILLRUIJIE2.0\nversion:2.2\nupgrade time:2023/1/31\nprovided by neo");
		ruijie rj;
		printf("你想要关闭RUIJIE还是恢复RUIJIE？[A/B]");
		string str;
		while(cin>>str)
		{
			if(str=="A")	rj.kill_process(rj.kill_name);
			else if(str=="B") rj.__resume();
		}
		return 0;
	}
}

int main()
{
	neo::main();
	return 0;
}
