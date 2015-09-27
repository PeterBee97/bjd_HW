#include<iostream>//预处理命令，调用iostream函数库文件
using namespace std;//使用命名空间std
int main( )//主函数首部
{ int x1,x2;//声明x1,x2
unsigned y;//声明y
char c1,c2;//声明c1,c2
x1=65535;x2=x1+5;//赋值
cout<<"enter y:";//输出提示信息
cin>>y;//输入y
c1=97;c2='A';c2=c2+32;//赋值
cout<<"x1="<<x1;//输出x1
cout<<"x2="<<x2;//输出x2
cout<<"y="<<(y+15);//输出y
cout<<"c1="<<c1;//输出c1
cout<<"c2="<<c2;//输出c2
return 0;//返回0
}//主函数结束
