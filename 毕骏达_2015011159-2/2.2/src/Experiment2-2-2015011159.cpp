#include<iostream>
int main()
{
    int f[6],i;
    f[0]=1; f[1]=1;
    for(i=2;i<6;i++)
        f[i]=f[i-1]+f[i-2];
    for(i=0;i<6;i++)
        std::cout<<i+1<<" "<<f[i]*2<<" "<<f[i]*20<<"\n";
}
