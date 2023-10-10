#include<iostream>
using namespace std;
class A
{ public:
      inline int multiply(int a,int b)
      {
        return a*b;
      }
    
};
class B
{
    public:
       inline int multiply(int a,int b)
       {
        return a*b;
       }
};
int main()
{  A a1;
   cout<<a1.multiply(98,98)<<endl;
   B b1;
   cout<<b1.multiply(90,90)<<endl;
   return 0;

}