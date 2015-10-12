#include<iostream>
using namespace std;
#define N 1000
int main()
{
    int i,j,k;
    for(i=N/15;i>1;i--)//倒序枚举母鸡
    {
        for(j=(N/10<99-i?N/10:99-i);j>1;j--)//枚举公鸡
        {
            k=100-i-j;//小鸡
            if(i*15+j*10+k*5<=1000)//钱够
            {
                cout<<"小鸡："<<k<<"只\n公鸡："<<j<<"只\n母鸡："<<i<<"只\n";
                return 0;//退出循环
            }
        }
    }
}
