#include<iostream>
using namespace std;
int add(int a,int b)
{
return a+b;
}
float add(float a,float b)
{
return a+b;
}
double add(double a,double b)
{
return a+b;
}

int main()
{
cout<<add(10,20)<<endl;
cout<<add(10.5f,20.6f)<<endl;
cout<<add(10.57,20.56)<<endl;
return 0;
}
