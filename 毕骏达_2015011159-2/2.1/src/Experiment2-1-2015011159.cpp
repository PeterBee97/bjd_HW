#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<"sizeof(short)="<<sizeof(short)<<endl;
	cout<<"sizeof(int)="<<sizeof(int)<<endl;
	cout<<"sizeof(long)="<<sizeof(long)<<endl;
	cout<<"sizeof(unsigned short)="<<sizeof(unsigned short)<<endl;
	cout<<"sizeof(unsigned int)="<<sizeof(unsigned int)<<endl;
	cout<<"sizeof(unsigned long)="<<sizeof(unsigned long)<<endl;
	cout<<"sizeof(char)="<<sizeof(char)<<endl;
	cout<<"sizeof(bool)="<<sizeof(bool)<<endl;
	cout<<"sizeof(double)="<<sizeof(double)<<endl;
	cout<<"sizeof(float)="<<sizeof(float)<<endl;
	float x=1.1234567890;
	cout<<setprecision(16)<<x;
	return 0;
}
