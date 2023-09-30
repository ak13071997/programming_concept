#include<iostream>
using namespace std;
class Rectangle{
  
  private:
  int len;   // data members
  int brd;
  public:     // access specifier
  void accept();   //member function
  void display();
  };
  
  
void Rectangle::accept()    //:: scope resolution
{
cout<<"enter the length and breadth"<<endl;
cin>>len>>brd;
}
void Rectangle::display()
{
cout<<"Area="<<len*brd<<endl;
}
int main()
{
Rectangle r1;       //r1 is object
r1.accept();
r1.display();
return 0;
}
