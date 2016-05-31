#include<iostream>
using namespace std;

int main()
{
    int i,j,k,s[5]={0},sum;
    cout<<"这些数是：\n";
    for (i=1;i<1000;i++)
    {
    	sum=0;
	   for (j=1;j<=i;++j)
	   {
	   		if(0==i%j)
	   		{
	   			s[sum]=j;
	 	  		sum++;
	   		}
	   		if(sum>5) break;
	   		if((5==sum)&&(j==i))
	   		{
		   		cout<<i<<":";
	   			for (k=0;k<5;++k) cout<<"\t"<<s[k];
	   			cout<<endl;
	   		}
	   	}
	}
    return 0;
}
