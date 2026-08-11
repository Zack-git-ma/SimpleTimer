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
	cout<<"===============================================Welcome to SimpleTimer==========================================================="<<endl; 
	cout<<"Initializing, please wait..."<<endl; 
	Sleep(500); 
	cout<<"Made by Zack123go@outlook.com, open?source only on GitHub. If you encounter Chinese garble in Chinese version, the program can still work normally."<<endl; 
	Sleep(500) ;
	cout<<"Do NOT run in full?screen mode or interrupt the timer during countdown. Use at your own risk."<<endl;
	Sleep(500);
	cout<<"Enter countdown seconds: " ;
	cin>>a;
	Sleep(500);
	cout<<"Countdown will start in 3 seconds"<<endl;
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
        cout << "\nWarning: alert.wav not found! Please place the audio file in the same folder as the program!" << endl;
    }
    cout << "\nCountdown finished!" << endl;
	system("pause");
	return 0;
}
