#include<iostream>
using namespace std;

unsigned long num_count(long x) //统计六位数中各数字出现次数，每个以3位二进制数表示，共30位，存到一个无符号长整型中
{
    unsigned long s=0;
    for(int i=0;i<6;i++)
    {
        s=s&~(7<<3*(x%10))|s+(1<<3*(x%10));
        x/=10;
    }
    return s;
}
int main()
{
    cout<<"满足条件的数有："<<endl;
    for(long i=100000;i<=1000000/3;i++)
        if ((num_count(i)==num_count(i<<1))&&(num_count(i)==num_count(i*3))) cout<<i<<endl;
    return 0;
}
