#include<iostream>
#define N 100000
int main()
{
    int f[3],i=2;
    f[0]=1; f[1]=1;
    while(1)
    {
        f[i%3]=f[(i+2)%3]+f[(i+1)%3];//滚动数组斐波那契
        if (f[i%3]*20>=N) break;
        i++;
    }
    std::cout<<"共需要："<<i+1<<"个月才能凑齐彩礼\n";
}

