#include<iostream>
using namespace std;
class si
{  int  p;
   float r;
   float t;
      public:
          si(int p, float r, float t)
          {
            this->p=p;
            this->r=r;
            this->t=t;

          }
            void calculate()
           { int si;
             si=p*r*t/100;
             cout<<"SI is: "<<si<<endl;
           }
};
int main()
{   int p;
    float r;
    float t;    
            cout<<"Enter the value of Principal: "<<endl;
            cin>>p;
            cout<<"Enter the value of rate: "<<endl;
            cin>>r;
            cout<<"Enter the value of time: "<<endl;
            cin>>t;
            
    si s(p,r,t);
    s.calculate();
    return 0;
}




  