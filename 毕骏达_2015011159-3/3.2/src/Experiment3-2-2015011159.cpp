#include<iostream>
using namespace std;

int main()
{
    bool a,b,c;
    for(int cases=0;cases<7;cases++)//ö�������ʹ��λ����
    {
        a=cases&1;//��
        b=(cases>>1)&1;//��
        c=(cases>>2)&1;//��
        if((a^b)&&(b^c)&&((a|b)^c))//�ж��Ƿ���ì�ܣ�0Ϊ˵��
        {
            cout<<"˵���ߣ�";
            if(!a) cout<<"�� ";
            if(!b) cout<<"�� ";
            if(!c) cout<<"�� ";
            cout<<endl;
        }
    }
    return 0;
}
