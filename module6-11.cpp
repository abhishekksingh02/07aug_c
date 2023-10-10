#include<iostream>
using namespace std;
class interchange
{ int a,  b;
     public:
        void getdata()
        {
            cout<<"Enter first number: "<<endl;
            cin>>a;
            cout<<"Enter second number: "<<endl;
            cin>>b;
        }
        void display()
        {
            cout<<"a = "<< a <<endl<< "b = "<< b <<endl;
        }
        friend void Swap(interchange &s);
};
void Swap(interchange &s)
{
    int temp;
    temp = s.a;
    s.a = s.b;
    s.b = temp;
}
int main()
{
    interchange i;
    i.getdata();
    cout<<"Brfore swapping"<<endl;
    i.display();

    Swap(i);
    cout<<"After swapping"<<endl;
    i.display();
    return 0;
}