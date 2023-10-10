#include<iostream>
#include<string.h>
using namespace std;
class cricketer
{ public:
     string name;
     int bold;
     int run;
           cricketer()
           {
             cout<<"Enter the name of Batsman: "<<endl;
             cin>>name;
             cout<<"Enter how many times you have got out: "<<endl;
             cin>>bold;
           }
};
class batsman : public cricketer
{ public:
      batsman()
      { int average;
        cout<<"Enter the total scored runs from the whole tournament: "<<endl;
        cin>>run;
        average=run/bold;
          cout<<"Your average run is: "<<average<<endl;
          cout<<"> Here are your whole details "<<endl<<"1) Your name is: " << name <<endl<< "2) Number of times you have got bold is: "<< bold <<endl<<"3) Total scored runs is: "<< run <<endl<<"4) Your Average run is: "<< average <<endl;
      }
};
int main()
{  
     batsman b;
    return 0;
}