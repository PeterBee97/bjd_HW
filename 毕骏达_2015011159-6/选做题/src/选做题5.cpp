#include<iostream>
using namespace std;

int a[5]={0},color=0;

void work()
{
    while(1){
        color++;
        for (int i1=1;i1<=color;i1++)
            for (int i2=1;i2<=color;i2++)
                for (int i3=1;i3<=color;i3++)
                    for (int i4=1;i4<=color;i4++)
                        for (int i5=1;i5<=color;i5++)
                            if ((i1!=i3)&&(i1!=i4)&&(i1!=i5)&&(i2!=i3)&&(i2!=i4)&&(i3!=i4)&&(i4!=i5))
                            {
                                a[0]=i1;a[1]=i2;a[2]=i3;a[3]=i4;a[4]=i5;
                                return;
                            }
    }
}

int main()
{
    work();
    cout<<"至少需要"<<color<<"种颜色\n";
    for (int i=0;i<5;i++)
        cout<<(char)('A'+i)<<":"<<a[i]<<endl;
    return 0;
}
