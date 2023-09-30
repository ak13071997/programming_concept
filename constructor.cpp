#include<iostream>
using namespace std;
class Rectangle{
  
  private:
  int len;   // data members
  int brd;
  public:     // access specifier
  void accept();   //member function
  void display();
  Rectangle();
  Rectangle(int ,int);
   void show();
   int getlen();
   void setlen(int);
  };
  
 Rectangle::Rectangle(){
 len=10;
 brd=20;
 }
 Rectangle::Rectangle(int l,int b)
 {
 len=l;
 brd=b;
 }
int Rectangle::getlen()
{
return len;
}
void Rectangle::setlen(int l)
{
len=l;
}
void Rectangle::accept()    //:: scope resolution
{
cout<<"enter the length and breadth"<<endl;
cin>>len>>brd;
}
void Rectangle::display()
{
cout<<"Area="<<len*brd<<endl;
}
void Rectangle::show()
{
 cout<<"length="<<len<<", bredth="<<brd<<endl;
}
int main()
{
Rectangle r1,r2(20,31),r3;       //r1 is object
r1.accept();
r1.display();
r1.show();

cout<<r2.getlen()<<endl;
r2.show();
r2.getlen();
r2.setlen(50);
r2.show();
cout<<""<<r2.getlen()<<endl;
return 0;
}
