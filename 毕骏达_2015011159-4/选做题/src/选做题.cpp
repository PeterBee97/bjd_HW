#include<iostream>
#include<string>
using namespace std;
const string s[20]={"zero","one","two","three","four","five","six","seven","eight","nine","ten",
    "eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
const string tens[4]={"twenty","thirty","forty","fifty"};
string num(int t)//���ֺ���
{
    if(t<20)return (s[t]);
    if (0==t%10) return (tens[t/10-2]);//��ʮ
    return (tens[t/10-2]+" "+s[t%10]);
}
int main()
{
    int i,j,h,m;
    cin>>h>>m;
    if ((h>23)||(m>59)){cout<<"��������ȷ��ʱ�䣡";return 0;}
    cout<<num(h)<<" ";
    if(0==m)cout<<"o'clock"<<endl;
    else cout<<num(m)<<endl;
    return 0;
}
