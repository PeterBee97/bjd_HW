#include<iostream>
using namespace std;

int main()
{
    int i,n,s=0,k=1;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        k*=i;
        s+=k;
    }
    cout<<s;
    return 0;
}
