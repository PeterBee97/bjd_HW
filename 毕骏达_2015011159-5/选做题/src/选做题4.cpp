#include<iostream>
using namespace std;

int ans=0;
void work(unsigned int w,int n)//���ѿ�� w������״̬ ��һ��7λ����������ʾ ���Ч�����λ��1 ���6λ0��ʾ��ñ�� 1��ʾ��ñ�� nΪ��ǰ��ñ�Ӹ���
{
    if ((n>3)||(w>1<<7)) return;//�����������Ҷ�ӽڵ�
	if((3==n)&&(w>1<<6))//�����������
	{
	    ans++;
		while(w-1)
		{
			if(w&1) cout<<"��";
			else cout<<"��";
			w>>=1;
		}
		cout<<endl;
	}
	else
	{
		work(w<<1,n);//����������һ��ñ��
		work(w<<1|1,n+1);//����������һ��ñ��
	}

}
int main()
{
    cout<<"ABCDEFñ�ӵ���ɫ����Ϊ��"<<endl;
    work(1,0);//w��ʼֵΪ0000001���Ժ�ÿ�������ƶ�һλ�ټ�0��1
    cout<<"��"<<ans<<"��"<<endl;
    return 0;
}
