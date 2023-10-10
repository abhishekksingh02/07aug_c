#include<iostream>
using namespace std;
class A
{
   int a,b,c;
     public:
      int getdata()
      {
        cout<<"Enter any two number.....:"<<endl;
        cin>>a>>b;
        return 0;
      }  
    
      int process()
      {
        // c=a*b;
        return a*b;
      }
      void show()
      {
        // cout<<"multiplication is:"<<c<<endl;
      }

};
int main()
{
    A obj;
    obj.getdata();
    cout<<obj.process();
    obj.show();
    
}   
