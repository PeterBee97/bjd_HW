#include<iostream>
#define N 100000
int main()
{
    int f[3],i=2;
    f[0]=1; f[1]=1;
    while(1)
    {
        f[i%3]=f[(i+2)%3]+f[(i+1)%3];//��������쳲�����
        if (f[i%3]*20>=N) break;
        i++;
    }
    std::cout<<"����Ҫ��"<<i+1<<"���²��ܴ������\n";
}

