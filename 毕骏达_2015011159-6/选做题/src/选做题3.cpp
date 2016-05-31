#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int i,a,b,n;
    long s=0;
    cout<<"please input a,b,n\t";
    scanf("%d,%d,%d",&a,&b,&n);
    for(i=1;i<=n;i++) s+=(a--)*(b--);
    cout<<"the all number of guan tou is "<<s<<endl;
    return 0;
}
