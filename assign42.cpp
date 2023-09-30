#include<iostream>
#include<cstring>
using namespace std;
class employee
{
        int emp_id;
        char emp_name[20];
        double salary;
public:
       employee();
       employee(int,char*,double);
       void accept();
       void display();
       int getemp_id();
};
employee::employee()
{
   //we can keep it as blank
}
employee::employee(int id,char *n,double s)
{
   emp_id=id;
   strcpy(emp_name,n);
   salary=s;
}
void employee::accept()
{
   cout<<"enter the employee details(id,name,salary)"<<endl;
   cin>>emp_id>>emp_name>>salary;
}
void employee::display()
{
   cout<<emp_id<<"   "<<emp_name<<"  "<<salary<<"  "<<endl;
}
int employee::getemp_id()
{
return emp_id;
}

int main()
{
   employee e[20];
   int choice,cnt=0,empid;
   while(true)
   {
       cout<<"1 - insert record"<<endl;
       cout<<"2 - update record"<<endl;
       cout<<"3 - display all record"<<endl;
       cout<<"4 - exit"<<endl;
       cin>>choice;
       switch(choice)
       {
           case 1: 
                 e[cnt].accept();
                 cnt++;
                 break;
           case 2:
                 cout<<"enter the employee id to be updated"<<endl;
                 cin>>empid;
                 for(int i=0; i<=cnt; i++)
                 {
                     if(e[i].getemp_id()==empid)
                     {
                       e[i].accept();           
                     }
                 }
                 break;
            case 3:
                   for(int i=0; i<cnt; i++)
                   {
                      e[i].display();
                   }
                   break;
            case 4:
                    exit(0);
        }
   }
return 0;
}

