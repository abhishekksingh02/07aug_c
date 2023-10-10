#include<iostream>
using namespace std;
class data
{ public:
   int a,b;
   char op;
     data()
     {    string isbreak;
         do
         {
          cout<<"Enter any two values:"<<endl;
          cin>>a>>b;
          cout<<"+"<<endl<<"-"<<endl<<"*"<<endl<<"/"<<endl;
          cout<<"Enter any operator from the above given operators:"<<endl;
          cin>>op;

          switch(op)
          {
               
               case '+':
               cout<<"Result="<<a+b<<endl;
               break;
               case '-':
               cout<<"Result="<<a-b<<endl;
               break;
               case '*': 
               cout<<"Result="<<a*b<<endl;
               break;
               case '/':
               cout<<"Result="<<a/b<<endl;
               break;
               default:cout<<"Enter valid operator.......!"<<endl;
               // isbreak=1;
               break;

               
          }
          cout<<"Do you want to continue.....";
          cin>>isbreak;

         }while(isbreak == "y" || isbreak == "Y");


     }

};
int main()
{
     data obj;
     return 0;
}