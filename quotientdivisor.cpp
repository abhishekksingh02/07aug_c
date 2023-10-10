#include<iostream>
using namespace std;
int main()
{
    int divisor,dividend,quotient,remainder;
    cout<<"Enter dividend:"<<endl;
    cin>>dividend;
    cout<<"Enter divisor:"<<endl;
    cin>>divisor;
    quotient=dividend/divisor;
    remainder=dividend%divisor;

    cout<<"Quotient="<<quotient<<endl;
    cout<<"Remainder="<<remainder<<endl;
    return 0;
}
