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
       Laptop(int, const char*,double);    //parameterised constructuion 
       void show();
       ~Laptop();
        Laptop(Laptop &);    //decleration of copyconstructor(deep copy)
};
Laptop::Laptop()
{
      lid=100;
      make=new char[3];
      strcpy(make,"hp");
      cost=40000;
}
Laptop::Laptop(int id, const char*m,double c) 
{

      lid=id;
      make=new char[strlen(m)+1];   //defining pointer
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
Laptop::Laptop(Laptop &L)
{
        lid=L.lid;
        make=new char[strlen(L.make)+1];
        strcpy(make,L.make);
        cost=L.cost;
}

int main()
{
      Laptop L1;
      L1.show();
      cout<<endl;

      Laptop L2(102,"lenovo",35000);

      L2.show();
      cout<<endl;

      Laptop L4(L2);         //copy constructor
      L4.show();
      cout<<endl;
      return 0;
}
