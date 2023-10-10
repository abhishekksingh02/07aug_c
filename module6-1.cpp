#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class Banking
{  string name ;
   int acno;
   string actype;
   
   int bal;
     public:
       void opbal(void)
       {
          cout<<endl<<endl;
          cout<<"Enter your name: "<<endl;
          cin>>name;
          cout<<"Enter A/c no: "<<endl;
          cin>>acno;
          cout<<"Enter A/c Type: "<<endl;
          cin>>actype;
          cout<<"Enter opening balance: "<<endl;
          cin>>bal;
       }
       void deposit(void)
       { int deposit=0;
         cout<<"ENTER THE DEPOSIT AMOUNT: "<<endl;
         cin>>deposit;
         bal=deposit+bal;
         cout<<"DEPOSIT BALANCE = "<<bal<<endl;
       }
       void withdraw(void)
       {
        int withdraw;
         cout<<"BALANCE AMOUNT = "<<bal<<endl;
         cout<<"ENTER THE WITHDRAW AMOUNT :"<<endl;
         cin>>withdraw;
              if(bal>withdraw)
                {
                    bal=bal-withdraw;
                      cout<<"AFTER WITHDRAW BALNACE IS = "<<bal<<endl;
                }
                else
                  {
                    cout<<"\n\n NOT ENOUGH BALANCE...."<<endl;
                  }
        }
       void display(void)
       {
         cout<<endl<<endl<<endl;
         cout<<setw(50)<<"DETAILS"<<endl;
         cout<<setw(50)<<"NAME: "<<name<<endl;
         cout<<setw(50)<<"A/c No. :  "<<acno<<endl;
         cout<<setw(50)<<"A/c TYPE: "<<actype<<endl;
         cout<<setw(50)<<"BALANCE = "<<bal<<endl;
       }
       
};

int main()
{
    Banking o1;

     int choice;

       do
       
       { 
         cout<<setw(50)<<"BANKING SYSTEM PROGRAM"<<endl;
         cout<<setw(50)<<"BELOW ARE THE CHOICE LIST"<<endl;
         cout<<"1) To assign values"<<endl;
         cout<<"2) To Deposit"<<endl;
         cout<<"3) To Withdraw"<<endl;
         cout<<"4) To display all details"<<endl;
         cout<<"5) EXIT"<<endl;
         cout<<"Enter your choice:"<<endl;
         cin>>choice;
           switch(choice)
           {
            case 1: o1.opbal();
            break;

            case 2: o1.deposit();
            break;

            case 3: o1.withdraw();
            break;

            case 4: o1.display();
            break;

            case 5: goto end;

            default: 
              cout<<"PLEASE ENTER VALID CHOICE..."<<endl;
           }
       }while(1);

end:

return 0;

}

