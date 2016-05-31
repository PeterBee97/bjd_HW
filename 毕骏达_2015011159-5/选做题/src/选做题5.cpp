#include<iostream>
#include<cstdlib>
using namespace std;

    int f[20]={0};//f[i]为数字i出现次数
    string s;
    int pow[7]={1,10,100,1000,10000,100000,1000000};

int minabs(int a,int b)
{
    return abs(a)<abs(b)?a:b;
}

int smin(int m)
{
    int p=m;
    f[m]--;
    for(int i=0;i<10;i++)
        for(int j=0;j<f[i];j++)
        p=p*10+i;
    f[m]++;
    return p;
}

int smax(int m)
{
    int p=m;
    f[m]--;
    for(int i=9;i>=0;i--)
        for(int j=0;j<f[i];j++)
        p=p*10+i;
    f[m]++;
    return p;
}

int find(string t,int n)
{
        int j=1;
        while(!(f[t[0]-48+j]||f[abs(t[0]-48-j)]))j++;
        //cout<<t<<t.length()<<endl;
        int delta = pow[t.length()+1];
        if (f[t[0]-48])
        {
            f[t[0]-48]--;
            delta = minabs(delta,(t[0]-48)*pow[t.length()-1]+find(t.substr(1,t.length()-1),n%pow[t.length()-1])-n);
            f[t[0]-48]++;
        }
        if((1==j)&&(f[t[0]-48]))
        {
            if (f[t[0]-48+1]) delta = minabs(delta,smin(t[0]-48+1)-n);
            if ((t[0]-48>0)&&(!((t.length()==5)&&(t[0]-48-1==0)))) delta = minabs(delta,smax(t[0]-48-1)-n);
        }
        else
        {
            if (f[t[0]-48+j]) delta = minabs(delta,smin(t[0]-48+j)-n);
            if ((t[0]-48-j>=0)&&(!((t.length()==5)&&(t[0]-48-j==0)))) delta = minabs(delta,smax(t[0]-48-j)-n);
        }
    return delta;
}

int main()
{

    cin>>s;
    if(s.length()!=5)cout<<"Error!\n";
    else
    {
        for(int i=0;i<5;i++)
            ++f[s[i]-48];

    cout<<40000+find("40000",40000)<<"\t"<<60000+find("60000",60000)<<endl;
    }
    return 0;
}
