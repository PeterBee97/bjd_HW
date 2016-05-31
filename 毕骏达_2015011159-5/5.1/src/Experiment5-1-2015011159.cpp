#include<iostream>
#include<cmath>
using namespace std;
#define N 200

int main()
{
    bool a[N+1]={0};
    int i,p,q;
    for(p=2;p<floor(sqrt(N));p++)
    {

        q=p;
        if (!a[p])
            while(p*q<N) a[p*(q++)]=1;
    }//É¸ËØÊý
    for(i=10;i<=N-2;i++)
        if (!a[i]&!a[i+2])//ÅÐÂÏÉú
            cout<<i<<" "<<i+2<<"\n";
    return 0;
}
