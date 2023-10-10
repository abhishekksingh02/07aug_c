#include<iostream>
#include<string.h>
#include<math.h>
#include<iomanip>


using namespace std;
 string name;
   int age;
   float score;
   float marks;

class person
{  public:

          person()
          { 
            cout<<"Enter your name: "<<endl;
            cin>>name;
            cout<<"Enter your age: "<<endl;
            cin>>age;
            cout<<"Enter total marks scored by you: "<<endl;
            cin>>score;
            cout<<"Enter the total  marks: "<<endl;
            cin>>marks;
        }


 };
 class percentage
 {  public:
         int per;
         

         percentage()
         {
         per=::score/::marks*100;
         cout<<"Your percentage is: "<<per<<endl;
       }
    
 };
 class teacher : public person , public percentage 
 {
    public:
       string teach;
          string type;
        int salary;
       teacher(){
            cout<<"Enter teacher's name: "<<endl;
            cin>>teach;
            cout<<"Enter whether you TGT or PGT: "<<endl;
            cin>>type;
               if(type=="PGT")
               {
                 cout<<"Your income is 80,000. "<<endl;
                 salary = 80000;
               }
               else if(type == "TGT"){
               cout<<"Your income is 40,000. "<<endl;
               salary = 40000;}

        }
       void  display()
        { cout<<setw(50)<<"BELOW ARE THE DETAILS: "<<endl;
          cout<<"Your name is: "<<name<<endl;
          cout<<"Your age is: "<<age<<endl;
          cout<<"Total scored marks by you is: "<<score<<endl;
          cout<<"Total  marks is: "<<marks<<endl;
          cout<<"Your percentage is: "<<per<<endl;
          cout<<"Teacher's name is: "<<teach<<endl;
          cout<<"Your salary is: "<<salary<<endl;

        }
 };
 int main()
 {  teacher t;
    t.display();
    
    return 0;
 }
