#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double x,y;
    cin>>x>>y;
    cout<<exp(-x*x/2)/sqrt(2*3.1415926535)<<endl;
    cout<<sin(x*x+y*y)*cos(x+y)/3;
    return 0;
}
