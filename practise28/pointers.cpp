#include <iostream>
using namespace std;

int main()
{
    int val = 50;
    int *p = &ival;
    cout<<"ival = "<<ival <<endl <<"p = "<<p <<endl <<"*p = "<<*p <<endl;
    *p = 51;
    cout<<"New ival = "<<ival <<endl <<"p  = "<<p <<endl  <<"*p = "<<*p <<endl <<"New *p = "<<*p;
    *p = 52;
     cout<<"New ival = "<<ival <<endl <<"p  = "<<p <<endl  <<"*p = "<<*p <<endl <<"New *p = "<<*p;
     return 0;

}