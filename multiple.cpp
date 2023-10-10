#include<iostream>
using namespace std;
class student1
{ public:
    string name1;
    int rollno1;
    float percentage1;
     student1()
     {
      cout<<"Enter your name:"<<endl;
      cin>>name1;
      cout<<"Enter your roll number:"<<endl;
      cin>>rollno1;
      cout<<"Enter your percentange:"<<endl;
      cin>>percentage1;
     };
};
class student2
{ public:
    string name2;
    int rollno2;
    float percentage2;
   
      student2()
      { cout<<"Enter your name:"<<endl;
        cin>>name2;
        cout<<"Enter your roll number:"<<endl;
        cin>>rollno2;
        cout<<"Enter your percentange:"<<endl;
        cin>>percentage2;

      };
};
class student3
{ public:
    string name3;
    int rollno3;
    float percentage3;
     student3()
       {
         cout<<"Enter your name:"<<endl;
         cin>>name3;
         cout<<"Enter your roll number:"<<endl;
         cin>>rollno3;
         cout<<"Enter your percentage:"<<endl;
         cin>>percentage3;
       };

};
class father:public student1,public student2,public student3
{ public:
       void display()
       {
         cout<<"Your name is:"<<name1<<endl;
         cout<<"Your roll number is:"<<rollno1<<endl;
         cout<<"Your percentage is:"<<percentage1<<endl;
         
         cout<<"Your name is:"<<name2<<endl;
         cout<<"Your roll number is:"<<rollno2<<endl;
         cout<<"Your percentage is:"<<percentage2<<endl;

         cout<<"Your name is:"<<name3<<endl;
         cout<<"Your roll number is:"<<rollno3<<endl;
         cout<<"Your percentage is:"<<percentage3<<endl;
         
       };

};
int main()
{
   father n;
   n.display();
   return 0;
}