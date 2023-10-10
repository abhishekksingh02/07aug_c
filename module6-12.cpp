#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str;
    string str2;
    str="Abhishek Singh";
    ofstream out;
    out.open("text.txt");
    out<<str;
    out.close();
    ifstream in("text2.txt");
    getline(in, str2);
    in>>str2;
    cout<<str2;
    in.close();
    return 0;
}