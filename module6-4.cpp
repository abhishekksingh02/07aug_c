#include<iostream>
using namespace std;
class calc
{  public:
     inline float mul(float x, float y)
     {
        return x*y;
     }
     inline float cube(float x)
     {
        return x*x*x;
     }
     
  
};
int main()
{
    calc obj;
    char i;
    float num1,num2;
    do
    {
    
    cout<<"Enter first number:"<<endl;
    cin>>num1;
    cout<<"Enter second number:"<<endl;
    cin>>num2;
    cout<<">Multiplication of above number is: "<<obj.mul(num1,num2)<<endl;
    cout<<">Cube value of first number is: "<<obj.cube(num1)<<endl;
    cout<<">Cube value of second number is: "<<obj.cube(num2)<<endl;
    cout<<"\nDo you want to continue.....\nFor yes press 'y'\nfor no press 'n'\n";
    cin>>i;
    }while(i == 'y' || i == 'Y');
    
    return 0;
}