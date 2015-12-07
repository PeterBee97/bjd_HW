#include<iostream>
#include<stdio.h>
using namespace std;

int aton(const char str[])
{
    int temp=0,dot=0;
    int s=0,i=0;
    char c;
    while(1)

    {
        c=str[i++];
        if (c=='.'||c=='\0')
        {
            ++dot;
            if (temp>255) return 0;
            s=(s<<8)+temp;
            temp=0;
            if (c=='\0') break;
        }
        else{
            temp=temp*10+c-48;
        }
    }
    if (dot<3)
    while(s>>24==0) s=((s&0xFFFFFF00)<<8)+(s&0xFF);
    return s;
}

int main()
{
    char str[20];
    gets(str);
    cout<<(unsigned long) aton(str);
}
