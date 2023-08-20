#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void textcolor(int color)              //code to change text color  

{
	static int __BACKGROUND;

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbiInfo;

	GetConsoleScreenBufferInfo(h, &csbiInfo);               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color + (__BACKGROUND << 4));
}

void emp(string x){
	cout << " ";
	for (int i = x.length(); i >= 0; i--) {
		for (int j =0; j != 2; j++) {
			Sleep(60);
			cout << "\b";
		}
		cout << " ";
	}
}
void show(string x) {
	textcolor(x.length()%15);
	for (int i = 0; i < x.length(); i++) {
		Sleep(80);
		cout << x[i];
	}
	textcolor(7);

}

int main()
{
	string name;
	string a,b,c,d;
	cout << "Enter your name: ";
	getline(cin,name);
	cout << endl;

	cout << "Enter your Qualities (4): " << endl;
	cin.ignore();
	getline(cin,a);
	getline(cin,b);
	getline(cin,c);
	getline(cin,d);
	

	cout << endl << endl << "Result: " << endl;
	cout << name + " ";
	show(a);
	Sleep(1000);
	emp(a);
	show(b);
	Sleep(1000);
	emp(b);
	show(c+" ");
	Sleep(1000);
	emp(c);
	show(d+"  ");
	Sleep(1000);

	

	return 0;
}