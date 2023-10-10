#include<iostream>
using namespace std;
int main()
{
    float amt,dis;
    cout<<"Enter purchasing amount:";
    cin>>amt;
    dis=(amt*10)/100;
    cout<<"purchasing amount="<<amt<<endl;
    cout<<"Discount="<<dis<<endl;
    cout<<"Net payable="<<amt-dis<<endl;
    return 0;
}