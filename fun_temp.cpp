#include<iostream>
using namespace std;
//function for single Template/generic argument
template<typename T>

void swap(T a, T b)
{
   T temp;
   temp=a;
   a=b;
   b=temp;
   cout<<a<<"   "<<b<<endl;
}
int main()
{
   swap(45,67);
   swap("akshay","ketan");
   swap(12.36f,69.54f);
   return 0;
}
