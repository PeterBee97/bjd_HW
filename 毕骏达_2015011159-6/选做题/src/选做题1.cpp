#include<iostream>
using namespace std;
#define N 100
#define M 100

int main()
{
    int m1=M/5,m3=M/3;
    for(int i=1;i<m1;i++)
        for(int k=1;k<m3;k++)
            {
                int j=100-i-(k<<1)-k;
                if (j>0&&(i<<2)+i+(j<<1)+j+k==N)
                {
                    cout<<"վ�ŵ�ˮţ:"<<i<<" ";
                    cout<<"���ŵ�ˮţ :"<<j<<"��";
                    cout<<"��ˮţ��"<<k*3<<"; ";
                }
            }

    return 0;
}
