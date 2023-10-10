#include<iostream>
using namespace std;
int main()
{
    int a=10,b=30;
    cout<<"Before swapping."<<endl;
    cout<<"a= "<<a<<", b= "<<b<<endl;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"After swapping"<<endl;
    cout<<"a= "<<a<<", b= "<<b<<endl;
    return 0;
} 