#include<iostream>
#include<string.h>
using namespace std;
class StringCat
{  char s[50];
      public:
         void input()
         {
            cout<<"Enter any string: "<<endl;
            cin>>s;
         }
        void operator +(StringCat sString)
        {
            strcat(s, sString.s );
            cout<<"Strings = "<<s<<endl;
        }
};
int main()
{
    StringCat s1,s2;
    s1.input();
    s2.input();
    s1+s2;
    return 0;

}