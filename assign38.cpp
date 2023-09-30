#include<iostream>
using namespace std;
int multi(int ,int, int=1, int=1);           // decleration of function
int main()
{
cout<<multi(1,4,6,7)<<endl;
cout<<multi(2,4,6)<<endl;
cout<<multi(2,4)<<endl;
return 0;
} 
int multi(int a, int b, int c, int d)      //defination of function
{
return a*b*c*d;
}
