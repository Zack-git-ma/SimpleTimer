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
    SetConsoleOutputCP(936);
	long long a,h,m,s;
	cout<<"===============================================Welcome to SimpleTimer=================================================="<<endl;
	cout<<"Initializing, please wait..."<<endl;
	Sleep(500);
	cout<<"Made by Zack123go@outlook.com, open?source only on GitHub."<<endl;
	Sleep(500) ;
	cout<<"Do NOT use full-screen mode or interrupt the program while timing, use at your own risk."<<endl;
	Sleep(500);
	cout<<"Enter hours minutes seconds: " ;
	cin >> h >> m >> s;
	a = s + m * 60 + h * 3600;
	Sleep(500);
	cout<<"Timer will start in 3 seconds. Total: "<<a<<" seconds"<<endl;
	Sleep(3000);
	long long n=0;
	while(n < a)
	{
		n++;
		Sleep(1000);
		cout<<n<<endl;
	}
    string audioPath = GetAppDir() + "alert.wav";
    BOOL ret = PlaySoundA(audioPath.c_str(), NULL, SND_FILENAME | SND_NODEFAULT);
    if(!ret)
    {
        cout << "\nWarning: alert.wav not found! Place audio file in the same folder as executable!" << endl;
    }
    cout << "\nTimer finished!" << endl;
	system("pause");
	return 0;
}
