#include<iostream>
using namespace std;
class zen
{   int a,b,c;
     public:
         int getdata()
       { cout<<"Enter any three number:"<<endl;
         cin>>a>>b>>c;
         }
    int process()
       { int result=(a>b)?((a>c)?(a):(c)) : ((b>c)?(b):(c));
            cout<<"The largest number is:"<<result<<endl;
            // int resutl=;
              // cout<<"The largest number is:"<<result<<endl;
              return 0;
         }
};
int main()
{
   zen obj;
   obj.getdata();
   obj.process();
}