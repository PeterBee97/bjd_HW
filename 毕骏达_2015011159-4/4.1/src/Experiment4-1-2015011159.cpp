#include<iostream>
using namespace std;

int main()
{
    bool a[4]={0,0,0,0};
    for(int i=0;i<4;i++)//ö�������ʹ��λ����
    {
        a[i]=1;
        if((a[1]^a[3])&&(a[1]^a[2])&&(a[0]^a[1]))//�ж��Ƿ���ì�ܣ�1Ϊ����
        {
            cout<<"�����ߣ�"<<char(65+i)<<endl;
            break;
        }
        a[i]=0;
    }
    return 0;
}
