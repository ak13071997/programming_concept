#include<iostream>
#include<cstring>
using namespace std;
class array
{
        int size;       //data members
        int *arr;
public:
       array();          //member function declaration
       array(int);
       void accept();
       void display();
       ~array();         //destructor declaration
       array(array &);    //copy constructor declaration
};
array::array()              //default construction function defination
{
   size=5;
   arr=new int[size];
   for (int i=0; i<5 ; i++)
   {
       arr[i]=0;
   }
}
array::array(int s)         //parameterised construction function defination
{
    size=s;
    arr=new int[size];
    for (int i=0; i<size ; i++)
    {
       arr[i]=0;
    }
}

void array::accept()         //member function defination
{
   cout<<"enter the elements"<<endl;
   for(int i=0; i<size; i++)
   {
      cin>>arr[i];
   }
}
void array::display()      //member function defination
{
   for(int i=0; i<size; i++)
   {
      cout<<arr[i]<<"  ";
   }  
   cout<<endl;
}
array::array(array &A)     //array A3(A2)   //copy constructor function defination
{
    size=A.size;
    arr=new int(size);        //new dynamic memory allocation for function to be copied 
    for(int i=0;i<size;i++)
    {
       arr[i]=A.arr[i];
    }
}
array::~array()
{
   delete []arr;
}
int main()
{ 
   array A1;         //creating object of class array
   array A2(8);      //parameterised function call
   A1.accept();
   A1.display();
   A2.accept();
   A2.display();
   array A3(A2);     //copy constructor function call
   A3.display();

return 0;
}
       
