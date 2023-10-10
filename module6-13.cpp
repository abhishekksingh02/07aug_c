#include<iostream>
using namespace std;
template <class T>
 void Swap(T &x, T &y)
 {
    T temp;
    temp = x;
    x = y;
    y = temp;
 }
 int main()
 {
    int x,y;
     do
     {
     
     cout<<"Enter first number: "<<endl;
     cin>>x;
     cout<<"Enter second number: "<<endl;
     cin>>y;
     cout<<"BEFORE SWAP: "<<endl;
     cout<<"Value of x is: "<<x<<endl;
     cout<<"Value of y is: "<<y<<endl;

     Swap(x , y);
      cout<<"AFTER SWAP: "<<endl;
      cout<<"Value of x is: "<<x<<endl;
      cout<<"Value of y is: "<<y<<endl;
     }while(1);
      return 0;
 }