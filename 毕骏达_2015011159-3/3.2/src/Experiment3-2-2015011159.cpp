#include<iostream>
using namespace std;

int main()
{
    bool a,b,c;
    for(int cases=0;cases<7;cases++)//枚举情况，使用位运算
    {
        a=cases&1;//甲
        b=(cases>>1)&1;//乙
        c=(cases>>2)&1;//丙
        if((a^b)&&(b^c)&&((a|b)^c))//判断是否无矛盾，0为说谎
        {
            cout<<"说谎者：";
            if(!a) cout<<"甲 ";
            if(!b) cout<<"乙 ";
            if(!c) cout<<"丙 ";
            cout<<endl;
        }
    }
    return 0;
}
