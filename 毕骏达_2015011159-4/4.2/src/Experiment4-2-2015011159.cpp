#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    cin>>a;
    cout<<a.size()<<endl;
    int i;
    cout<<a<<endl;
    for(i=a.size()-1;i>=0;i--)cout<<a[i];cout<<endl;
    return 0;
}
