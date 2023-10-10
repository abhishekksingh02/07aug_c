#include<iostream>
using namespace std;
typedef struct employee
{   
        int eId;
        char favChar;
        float salary;
};
int main()
{
    struct employee abhishek;
    abhishek.eId=2;
    abhishek.favChar = 'A';
    abhishek.salary = 50000;
    cout<<"The employees name is Abhishek"<<endl;
    cout<<"The employees id is: "<<abhishek.eId<<endl;
    cout<<"The employees fav char is: "<<abhishek.favChar<<endl;
    cout<<"The employees salary is: "<<abhishek.salary<<endl;
    return 0;
}