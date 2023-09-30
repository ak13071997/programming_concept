#include<iostream>
#include<cstring>
using namespace std;
class Laptop
{
private:
       int lid;           //data members
       char *make;
       double cost;                   //data members
public:
       Laptop();            //default construction
       Laptop(int, char*,double);    //parameterised constructuion 
       void show();
       ~Laptop();
};
Laptop::Laptop()
{
  lid=100;
  make=new char[3];
  strcpy(make,"hp");
  cost=40000;
}
Laptop::Laptop(int id, char*m,double c) 
{

  lid=id;
  make=new char[strlen(m)+1];\    //defining pointer
  strcpy(make,m);                // coping value m into make
  cost=c;
}
void Laptop::show()
{
cout<<lid<<endl;
cout<<make<<endl;
cout<<cost<<endl;
}
Laptop::~Laptop()
{
delete[]make;
}

int main()
{
Laptop L1;
Laptop L2(102,"lenovo",35000);
L1.show();
cout<<endl;
L2.show();
cout<<endl;

return 0;
}
