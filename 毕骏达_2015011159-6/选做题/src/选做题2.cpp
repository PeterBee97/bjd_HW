#include<iostream>
using namespace std;

int main()
{
    int i,j,k;
    int a[3000]={0};
    a[0]=1;a[1]=1;
    for(i=2;i<=1000;i++)
    {
        for(j=1;j<=a[0];j++) a[j]*=i;
        for(j=1;j<=a[0];j++)
        {
            a[j+1]+=a[j]/10;
            a[j]%=10;
        }
        while(a[a[0]+1])
        {
            a[0]++;
            a[a[0]+1]+=a[a[0]]/10;
            a[a[0]]%=10;
        }
    }
    cout<<a[0];
    return 0;
}
