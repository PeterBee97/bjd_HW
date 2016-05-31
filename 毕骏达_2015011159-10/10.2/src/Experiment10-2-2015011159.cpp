#include<iostream>
using namespace std;
int m=0;

void del(int *p,int n)
{
    for(int i=0;i<2;i++)
    {
        while (*(p+m)==1) {m=(m+1)%n;}
        m=(m+1)%n;
    }
    while (*(p+m)==1) {m=(m+1)%n;}
	*(p+m)=1;
}

int main()
{
    int i,n,num[50]={0};
    cin>>n;
    for (i = 0; i < n; ++i)	del(num,n);
    cout<<m+1<<endl;
    return 0;
}
