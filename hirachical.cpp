#include<iostream>
using namespace std;
class parent
{ 
    public:
      parent()
        {
            cout<<"This is parent class:"<<endl;
        }
      
};
class child1:public parent
{ 
    public:
       child1()
          {
            cout<<"This is child 1:"<<endl;
          }
};
class child2:public parent 
{ 
    public:
      child2()
       {
        cout<<"This is child 2:"<<endl;
       }
};
class child3:public parent 
{
    public:
      child3()
       {
        cout<<"This is child 3:"<<endl;
       }
};
int main()
{
    child1 c1;
    child2 c2;
    child3 c3;
    return 0;
    
    }