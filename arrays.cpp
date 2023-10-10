/* what are arrays in c++?
> An array is the collection of items of similar types stored in contigous memory locations.
> sometimes a simple variable is not enough to hold all the data.
> For example, lets say we want to store the marks of 
2500 students, having 2500 different variables for this task is not feasible
> To solve this problem we can define an array with size 2500 that can hold the marks of all students
> we can change the value of array.
*/
#include<iostream>
using namespace std;
int main()
{    int i;
     int marks[]={23,45,56,89};
     cout<<marks[0]<<endl;
     cout<<marks[1]<<endl;
     cout<<marks[2]<<endl;
     cout<<marks[3]<<endl;
       for(int i=0; i<4; i++)
       {
        cout<<"The value of marks "<< i << " is "<<marks[i]<<endl;
       }
    return 0;
} 
