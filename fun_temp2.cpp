#include<iostream>
using namespace std;
//function for multiple Template/generic argument
template<typename T>  //decleration of a template
void swap(T a, T b)
{
   T temp;
   temp=a;
   a=b;
   b=temp;
   cout<<a<<"   "<<b<<endl;
}

template<typename T, typename U>  //decleration of a template
U add(T a, U b)
{
  return a+b;
}

int main()
{
   swap(45,67);
   swap("akshay","ketan");
   swap(12.36f,69.54f);
   
   cout<<add(24,57)<<endl;
   cout<<add(24,57.56f)<<endl;
   cout<<add(24,34.7)<<endl;
   return 0;
}   
