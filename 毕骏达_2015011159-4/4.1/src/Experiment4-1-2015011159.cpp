#include<iostream>
using namespace std;

int main()
{
    bool a[4]={0,0,0,0};
    for(int i=0;i<4;i++)//枚举情况，使用位运算
    {
        a[i]=1;
        if((a[1]^a[3])&&(a[1]^a[2])&&(a[0]^a[1]))//判断是否无矛盾，1为八卦
        {
            cout<<"八卦者："<<char(65+i)<<endl;
            break;
        }
        a[i]=0;
    }
    return 0;
}
