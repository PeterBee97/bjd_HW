#include<iostream>
using namespace std;

int main()
{
    int i,j,temp=~0,m,mi,a[10];
    for (i = 0; i < 10; ++i) cin>>a[i];
    for (i = 0; i < 10; ++i)
    {
        m=(~0)^(1<<31);
        for (j = 0; j < 10; ++j) if (a[j]>temp&&a[j]<=m) {mi=j;m=a[j];}
        temp=a[mi];
        cout<<temp<<" ";
    }
    cout<<endl;temp=~0;
    for (i = 0; i < 10; ++i)
    {
        m=(~0)^(1<<31);
        for (j = 0; j < 10; ++j) if (a[j]>temp&&a[j]<=m) {mi=j;m=a[j];}
        temp=a[mi];
        cout<<mi<<" ";
    }
    cout<<endl;
    return 0;
}
