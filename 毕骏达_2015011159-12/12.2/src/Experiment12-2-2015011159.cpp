#include<iostream>
using namespace std;
enum weekday {sun,mon,tue,wed,thu,fri,sat};
char week[7][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
int main()
{
    int i;
    cin>>i;
    cout<<week[(enum weekday)(i%7)];
    return 0;
}
