#include<iostream>
using namespace std;

unsigned long num_count(long x) //ͳ����λ���и����ֳ��ִ�����ÿ����3λ����������ʾ����30λ���浽һ���޷��ų�������
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
    cout<<"�������������У�"<<endl;
    for(long i=100000;i<=1000000/3;i++)
        if ((num_count(i)==num_count(i<<1))&&(num_count(i)==num_count(i*3))) cout<<i<<endl;
    return 0;
}
