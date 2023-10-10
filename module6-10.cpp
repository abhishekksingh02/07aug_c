#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
class account
{
  char name[20];
  long int acno;
  string actype;
  string savings;
  string current;

public:
  int bal;
  int getdata()
  {
    cout<<setw(50) << "THIS BANKING SYSTEM PROVIDES YOU THE FACILITY OF TWO TYPES OF ACCOUNT i.e CURRENT AND SAVINGS..." << endl;
    cout<<"Enter Account holder's name: " << endl;
    cin>>name;
    cout<<"Enter your Account number: " << endl;
    cin>>acno;
    cout<<"Enter Account type: " << endl;
    cin>>actype;
    cout<<"Enter your opening balance: " << endl;
    cin>>bal;
  }
  void display()
  {
    cout<<"Account Holder's name: " << name << endl;
    cout<<"Account number: " << acno << endl;
    cout<<"Account type: " << actype << endl;
    cout<<"Opening balance is: " << bal << endl;
  }
};
class current : public account
{
  float depo;
  float with;
  int balance;

public:
  void deposit()
  {
    cout<<"Enter money to deposit: " << endl;
    cin>>depo;
  }
  void display()
  {
    balance = bal + depo;
    cout<<"After deposit main balance is: " << balance << endl;
  }
  void withdraw()
  {
    cout<<"Enter money to withdraw: " << endl;
    cin>>with;
    if (with < bal)
    {
      balance = bal - with;
      cout<<"After withdraw main balance is: " << balance << endl;
    }
    else
    {
      cout<<"You cannot withdraw money..... " << endl;
    }
  }
  void check_bal()
  {
    int min = 500;
    if (balance < min)
    {
      cout << "Opening balance should not be less than 500...." << endl;
      balance = bal - 150;
      cout<<"After applying penalty, main balance is: " << balance << endl;
    }
  }
};
class savings : public account
{
  float depo;
  float with;
  float intr;
  int balance;

public:
  void deposit()
  {
    cout<<"Enter money to deposit: " << endl;
    cin>>depo;
  }
  void display()
  {
    balance = bal + depo;
    cout<<"After deposit main balance is: " << balance << endl;
  }
  void withdraw()
  {
    cout<<"Enter money to withdraw: " << endl;
    cin>>with;
    cout<<bal;
    if (with < bal)
    {
      balance = bal - with;
      cout<<"After withdraw balance is: " << balance << endl;
    }
    else
    {
      cout<<"You cannot withdraw money....." << endl;
    }
  }
  void cal_interest()
  {
    intr = (bal * 2) / 100;
    balance = bal + intr;
    cout<<"After calculating interest balance is: " << balance << endl;
  }
};
int main()
{
  current c;
  savings s;
  char ch;
  int choice;
  int ch2;
  cout<<"Enter 'S' for Savings account and 'C' for Current account: " << endl;
  cin>>ch;
  if (ch == 'C' || ch == 'c')
  {
    c.getdata();
    c.check_bal();
    cout<<"1. Display " << endl;
    cout<<"2. Deposit  " << endl;
    cout<<"3. Withdraw " << endl;
    cout<<"4. check balance "<<endl;
    cout<<"5. Exit " << endl;
    cout<<"Enter your choice: "<< endl;
    cin>>choice;

    switch (choice)
    {
    case 1:
      c.display();
      break;
    case 2:
      c.deposit();
      break;
    case 3:
      c.withdraw();
      break;
    case 4:
      c.check_bal();
        break;
    case 5:
      exit(0);
    }
  }
  else if (ch == 'S' || ch == 's')
  {
    s.getdata();
    cout<<"1. Display " << endl;
    cout<<"2. Deposit  " << endl;
    cout<<"3. Withdraw " << endl;
    cout<<"4. Calculate interest" << endl;
    cout<<"5. Exit" << endl;
    cout<<"Enter your choice: " << endl;
    cin>>ch2;
    switch (ch2)
    {
    case 1:
      s.display();
      break;
    case 2:
      s.deposit();
      break;
    case 3:
      s.withdraw();
      break;
    case 4:
      s.cal_interest();
      break;
    case 5:
      exit(0);
    }
  }
  else
    cout<<"Enter a valid choice......." << endl;
  return 0;
}
