#include <windows.h>
#include<iostream>
#include<mmsystem.h>
#include <string>
#pragma comment(lib,"WINMM.LIB")
using namespace std;
string GetAppDir()
{
    char buf[MAX_PATH] = { 0 };
    GetModuleFileNameA(NULL, buf, MAX_PATH);
    string path(buf);
    size_t pos = path.find_last_of('\\');
    if(pos != string::npos)
    {
        path = path.substr(0, pos + 1);
    }
    return path;
}
int main(){
	long long a;
	cout<<"===============================================欢迎使用计时器==========================================================="<<endl; 
	cout<<"正在初始化，请稍等"<<endl; 
	Sleep(500); 
	cout<<"本程序由Zack123go@outlook.com制作，仅在GitHub开源，中文版如出现中文乱码，下载后也可以正常使用"<<endl; 
	Sleep(500) ;
	cout<<"使用此软件时，切勿全屏使用或在计时期间干扰计时器，否则一切后果自负"<<endl;
	Sleep(500);
	cout<<"请输入你想计时的秒数：" ;
	cin>>a;
	Sleep(500);
	cout<<"即将在3秒后开始计时"<<endl;
	Sleep(3000);
	long long n=0;
	while(n < a)
	{
		n++;
		Sleep(1000);
		cout<<n<<endl;
	}
    string audioPath = GetAppDir() + "alert.wav";
    BOOL ret = PlaySoundA(audioPath.c_str(), NULL, SND_FILENAME | SND_ASYNC | SND_NODEFAULT);
    if(!ret)
    {
        cout << "\n警告：未找到 alert.wav，请把音频放在程序同一文件夹！" << endl;
    }
    cout << "\n计时结束！" << endl;
	system("pause");
	return 0;
}
