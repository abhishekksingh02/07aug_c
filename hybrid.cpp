#include<iostream>
using namespace std;
class A
{ public:
        int  num;
        string name;
      void putdata()
      {
        cout<<"Enter your UID number"<<endl;
        cin>>num;
        cout<<"Enter your Bank name"<<endl;
        cin>>name;
      }

};
class B:public A
{ public:
    void display()
    {
         cout<<"our servers checked your UID number, and its not linked with your bank"<<endl;
    }

};
class C
{ public:
    void message()
    {
        cout<<"Our servers are linking your account with your UID number, kindly wait for a sec......"<<endl;
    }

};
class D:public B,public C
{ public:
    void print()
    {
        cout<<"we have linked your UID number:)"<<endl;
    }

};
int main()
{
    D obj;
    obj.putdata();
    obj.display();
    obj.message();
    obj.print();
    return 0;
}