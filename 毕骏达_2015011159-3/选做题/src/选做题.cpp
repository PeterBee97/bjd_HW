#include<iostream>
using namespace std;
#define N 1000
int main()
{
    int i,j,k;
    for(i=N/15;i>1;i--)//����ö��ĸ��
    {
        for(j=(N/10<99-i?N/10:99-i);j>1;j--)//ö�ٹ���
        {
            k=100-i-j;//С��
            if(i*15+j*10+k*5<=1000)//Ǯ��
            {
                cout<<"С����"<<k<<"ֻ\n������"<<j<<"ֻ\nĸ����"<<i<<"ֻ\n";
                return 0;//�˳�ѭ��
            }
        }
    }
}
