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
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);//����Ϊ��ɫ
	int option, price;
	while (1)
	{
		cout << "��ѡ�������Ķ��Ĺ���\n";
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED);//����Ϊ��ɫ
		cout<<"1.Ī������\n2.����֮��\n3.��������\n4.��ϲ����\n5.���´���\n6.��ӭ���ͣ��ټ�\n";
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);//����Ϊ��ɫ
		cin >> option;
		switch (option)
		{
		case 1:print1(); break;
		case 2: cout << "��������ļ۸�";
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