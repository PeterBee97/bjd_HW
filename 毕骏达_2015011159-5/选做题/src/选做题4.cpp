#include<iostream>
using namespace std;

int ans=0;
void work(unsigned int w,int n)//深搜框架 w是搜索状态 用一个7位二进制数表示 最后效果最高位是1 其后6位0表示黑帽子 1表示白帽子 n为当前白帽子个数
{
    if ((n>3)||(w>1<<7)) return;//不符合题意的叶子节点
	if((3==n)&&(w>1<<6))//符合题意输出
	{
	    ans++;
		while(w-1)
		{
			if(w&1) cout<<"白";
			else cout<<"黑";
			w>>=1;
		}
		cout<<endl;
	}
	else
	{
		work(w<<1,n);//继续搜索给一黑帽子
		work(w<<1|1,n+1);//继续搜索给一白帽子
	}

}
int main()
{
    cout<<"ABCDEF帽子的颜色依次为："<<endl;
    work(1,0);//w初始值为0000001，以后每次向左移动一位再加0或1
    cout<<"共"<<ans<<"种"<<endl;
    return 0;
}
