#include<iostream>
using namespace std;
class Operator
{ 
    public:
       int no;
       void get()
       {
        cout<<"Enter the value of no:"<<endl;
        cin>>no;
       }
       Operator operator *(Operator &obj2)
       {
        Operator obj3;
        obj3.no = no * obj2.no;
        return(obj3);
       }
    void display()
    {
        cout<<"Value of the no is :"<<no<<endl;

    }
};
int main()
{
    Operator opr1, opr2, opr3;
    opr1.get();
    opr1.display();
    opr2.get();
    opr2.display();
    opr3 = opr1 * opr2;
    opr3.display();
    return 0;
}