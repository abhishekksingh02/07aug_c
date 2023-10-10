#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class lecturedetails
{ char name[ 50];
  char sub[50];
  char course[50];
  int nol;
    public:
        
         void getdata()
         { 
            cout<<"Enter the name of lecturer: "<<endl;
            cin>>name;
            cout<<"Enter the name of subject: "<<endl;
            cin>>sub;
            cout<<"Enter the name of course: "<<endl;
            cin>>course;
            cout<<"Enter the number of lectures: "<<endl;
            cin>>nol;
         }
         
         void display()
         {  cout<<setw(50)<<"Below is the details of scheduled lectures:"<<endl;
            cout<<"Name of lecturer is: "<<name<<endl;
            cout<<"Name of subject is: "<<sub<<endl;
            cout<<"Name of course is: "<<course<<endl;
            cout<<"Number of lectures is: "<<nol<<endl;
         } 
         
        
};
int main(){
   lecturedetails l[5];
      int i;
        for(int i=0;i<5;i++)
        {
           l[i].getdata();
           l[i].display();
        }
    return 0;
}