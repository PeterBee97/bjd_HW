#include<iostream>
#include<iomanip>
#include<windows.h>

using namespace std;
int recursively_work(int n)
{
    if (n==2) return 2;
    return (recursively_work(n-1)+2)%n+1;
}

int recurrently_work(int n)
{
    int ans=2;
    for(int i=3;i<=n;i++)ans=(ans+2)%i+1;
    return ans;
}
int main()
{
    LARGE_INTEGER lv;
    unsigned long long Q1,Q2,Q3;
    int ans1,ans2,n;
    cout<<"请输入总人数：";
    cin>>n;
    QueryPerformanceFrequency( &lv );
    double secondsPerTick = 1000.0 / lv.QuadPart;
    QueryPerformanceCounter( &lv );
    Q1 = lv.QuadPart;
    ans1 = recursively_work(n);
    QueryPerformanceCounter( &lv );
    Q2 = lv.QuadPart;
    ans2 = recurrently_work(n);
    QueryPerformanceCounter( &lv );
    Q3 = lv.QuadPart;
    cout<<setprecision(5);
    cout<<"递归结果为第"<<ans1<<"个位置，用时"<<secondsPerTick * ( Q2-Q1 )<<"毫秒\n";
    cout<<"递推结果为第"<<ans2<<"个位置，用时"<<secondsPerTick * ( Q3-Q2 )<<"毫秒\n";
    system("pause");
    return 0;
}
