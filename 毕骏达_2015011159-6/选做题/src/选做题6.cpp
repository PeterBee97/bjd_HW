#include<iostream>
using namespace std;

static int a[3][3];

bool check(int code,int arg) //¼ì²âºÏ·¨ÐÔ
{
    switch(code)    //0:row 1:column 2:diagonal1 3:diagonal2
    {
        case 0:return (a[arg][0]+a[arg][1]+a[arg][2]==15);
        case 1:return (a[0][arg]+a[1][arg]+a[2][arg]==15);
        case 2:return (a[0][0]+a[1][1]+a[2][2]==15);
        case 3:return (a[0][2]+a[1][1]+a[2][0]==15);
    }
    return 0;
}

void printa()
{
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
}
void work(int n,int p)
{
    for(int i=0;i<9;i++)
    {
        if (p>>i & 1) continue;
        a[n/3][n%3]=i+1;
        if (8==n){
            if (check(0,2)&&check(1,2)&&check(2,0)) printa();
        }
        else if (!((2==n)&&!check(0,0))&&
            !((5==n)&&!check(0,1))&&
            !((6==n)&&!check(1,0)&&check(3,0))&&
            !((7==n)&&!check(1,1))) work(n+1,p | 1<<i);
    }
    return;
}
int main()
{
    work(0,0);
    return 0;
}
