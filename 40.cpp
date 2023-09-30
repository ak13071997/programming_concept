#include<iostream>
using namespace std;
class complex
{
private:
       int real;           //data members
       int img;            //data members
public:
       complex();            //default construction
       complex(int, int);    //parameterised constructuion 
       void show();
       int getreal();
       void setreal(int);
       int getimg();
       void setimg(int); 
       void display();
       static int count;
} ;
int complex::count = 0;
complex::complex() 
{
  real=10;
  img=30;
  count++;
}
complex::complex(int r, int i) 
{
  real=r;
  img=i;
  count++;
}
void complex::show()
{
cout<<"real integer = "<<real<<" the imaginary integer = "<<img<<endl;
}
int complex::getreal()
{
return real;
}
void complex::setreal(int r)
{
real=r;
}
int complex::getimg()
{
return img;
}
void complex::setimg(int i)
{
img=i;
}
void complex::display()
{
cout<<"real integer = "<<real<<" the imaginary integer = "<<img<<endl;
}

int main()
{
complex C1,C2,C3(20,40);
C3.show();

cout<<C3.getreal()<<endl;

C2.getreal();
C2.getimg();

C2.setreal(100);
C2.setimg(200);

C2.display();
cout<<"Number of object: "<<complex::count<<endl;
return 0;
}
