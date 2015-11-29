#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int a[200],n=199,m;

void swapa(int x,int y)
{
    int t=a[x];
    a[x]=a[y];
    a[y]=t;
}

void sift_up(int x)
{
    while(x)
    {
        if (a[x]>a[x>>1]) swapa(x,x>>1);
        x=x>>1;
    }
}

void sift_down(int x)
{
    int t=x;
    if (((x<<1)+1<=n)&&(a[(x<<1)+1]>a[t]))   t=(x<<1)+1;
    if (((x<<1)<=n)&&(a[x<<1]>a[t]))   t=x<<1;
    if (t==x) return;
    swapa(t,x);
    sift_down(t);
}

int main()
{
    srand(time(NULL));
    for (int i=1;i<n;i++)//用大根堆找出最大值
    {
        a[i]=rand();
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for (int i=100;i<=n;i++) sift_up(i);
    for (int k=0;k<10;k++)
    {
        cout<<a[1]<<endl;
        swapa(1,n);
        n--;
        sift_down(1);
    }
    n=199;
    a[0]=0;
    for (int k=0;k<10;k++)//线性查找找出最大值
    {
        m=0;
        for (int i=1;i<=n;i++) if (a[i]>a[m]) m=i;
        cout<<a[m]<<endl;
        a[m]=0;
    }

    return 0;
}
