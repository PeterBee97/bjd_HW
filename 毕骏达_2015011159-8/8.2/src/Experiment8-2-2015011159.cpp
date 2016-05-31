#include<iostream>
#include<cmath>
#define E 0.00001

using namespace std;
float a[4][5]={1.1161,0.1254,0.1397,0.1490,1.5471,
               0.1582,1.1675,0.1768,0.1871,1.6471,
               0.2368,0.2471,0.2568,1.2671,1.8471,
               0.1968,0.2071,1.2168,0.2271,1.7471};
int i,i2,j,k,n;

void printa()
{
	for (int i = 0; i <n; ++i)
	{
		for(int j=0;j<=n;j++)cout<<a[i][j]<<" ";
			cout<<endl;
	}
}

void swapxy(int x,int y)
{
	int k;
	float temp;
	for (k = 0; k <= n; ++k)
			{
				temp=a[x][k];
				a[x][k]=a[y][k];
				a[y][k]=temp;
			}
}

void del(int l1,int l2,int code)
{
    float p=a[l2][l1]/a[l1][l1];
	if(fabs(a[l2][l1])<E) return;
	if (code==0)
        for (int i = l1; i < n; ++i)
        {
            a[l2][i]-=a[l1][i]*p;//delete
        }
	else
        for (int i = l1; i >= 0; --i)
        {
            a[l2][i]-=a[l1][i]*p;//delete
        }

    a[l2][n]-=a[l1][n]*p;//process the last element
}

int main()
{
    n=4;
	for (i = 0; i < n; ++i)
	{
		if (fabs(a[i][i])<E)
		{
			for (i2 = i+1; i2 < n; ++i2)
			{
				if(fabs(a[i2][i])>E)
				{
					swapxy(i,i2);
					i2=n+1;
				}
			}
		};
		for (i2 = i+1; i2 < n; ++i2)
		{
			del(i,i2,0);//将第i2行化为0,消成上三角
		}
	}
	for(i=n-1;i>=0;--i)
    {
        if(fabs(a[i][i])<E)
        {
            if (fabs(a[i][n])>E) {cout<<"No solution";return 0;} else {cout<<"Infinite solutions";return 0;}
        }else
            for (i2 = i-1; i2 >= 0; --i2)
		{
			del(i,i2,1);//将第i2行化为0,消成对角线
		}
    }
	//printa();
	for(i=0;i<n;i++)//print solution
    {
        cout<<"x("<<i+1<<")="<<a[i][n]/a[i][i]<<endl;
    }
	return 0;
}
