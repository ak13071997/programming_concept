#include<iostream>
using namespace std;

class account
{
public:
       double balance=3000;
       double withdrawal=3000;
       double deposite;
       double limit=15000;
  
public:
       void depositte();
       double withdrawall();

};
void account::depositte()
{
    double d;
    cout<<"enter the deposite amount"<<endl;
    cin>>d;
    balance=balance+d;
}
double account::withdrawall()
{
    cout<<"enter the withdrawal amount "<<endl;
    cin>>withdrawal;
    if(withdrawal>=15000)
    
    {
         throw "overlimit...";
    }
    else if(withdrawal>balance)
    {
         throw "insufficiantbalance....";
    }
    else 
    {
         balance=balance-withdrawal;
    }
    
 }   

int main()
{
   account ac;
   try
   { 
       int ch;
       
       cout<<"balance is "<<ac.balance<<endl;
       cout<<"enter 1 for deposite, 2 for withdrawal "<<endl;
       cin>>ch;
       switch(ch)
       {
          case 1: 
                 ac.depositte();
                 break;
          case 2:
                 //int w;
                 ac.withdrawall();
                 break;
       }
   }
   catch(const char *ex)
   {
        cout<<ex<<endl;
        
   }
   catch(const char *exe)
   {
        cout<<exe<<endl;
   }
  
   cout<<"balance = "<<ac.balance<<endl;
   
   
return 0;
}
