#include<iostream>
using namespace std;

int main()
{
    int i;
    int f[6];
    f[5]=11;
    f[0]=11;//f[0]��Ŀǰ�ܺ�
    for (i=4;i>0;i--)
    {
        f[i]=(((i+1)*f[0]+1)/i+1)/(i+1);//�������
        f[0]+=f[i];
    }
    for (i=0;i<=5;i++)cout<<f[i]<<" ";
    return 0;
}
