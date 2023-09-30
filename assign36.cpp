#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
int temp;
temp=a;
a=b;
b=temp;
}
int main()
{
int a,b;
cout<<"enter the integers to be swap"<<endl;
cin>>a>>b;
swap(a,b);
cout<<"after swapping a= "<<a<<",b= "<<b<<endl;

return 0;
}


