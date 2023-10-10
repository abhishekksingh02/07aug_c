#include<iostream>
using namespace std;
 double factorial(double n)
{
    if(n==1||n==0)
    {
        return 1;
    }
    else
      return n * factorial(n-1);
}
int main()
{   int a;
    cout<<"Enter a number: "<<endl;
    cin>>a;
    cout<<"The factorial of "<< a <<" is "<< factorial(a) <<endl;
    return 0;
}