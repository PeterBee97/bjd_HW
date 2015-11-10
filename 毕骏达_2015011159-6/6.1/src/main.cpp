#include<iostream>
#include<windows.h>
using namespace std;
extern void print1(void);
extern void print2(int price);
extern void print3(void);
extern void print4(void);
extern void print5(void);
int main()
{
	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);//设置为白色
	int option, price;
	while (1)
	{
		cout << "请选择您想阅读的故事\n";
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED);//设置为红色
		cout<<"1.莫名短信\n2.彩礼之忧\n3.八卦疑云\n4.亦喜亦忧\n5.故事待续\n6.欢迎欣赏，再见\n";
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);//设置为白色
		cin >> option;
		switch (option)
		{
		case 1:print1(); break;
		case 2: cout << "请输入羊的价格";
			cin >> price;
			print2(price);
			break;
		case 3:print3(); break;
		case 4:print4(); break;
		case 5:print5(); break;
		case 6:return 0;
		}
	}
}