#include<iostream>
using namespace std;
int main()
{
  int i;
  int *ptr=new int [9];
  cout<<"enter the nine integers"<<endl;
  for(i=0;i<9;i++)
  cin>>ptr[i];
  for(i=0;i<9;i++)
  cout<<ptr[i]<<"  "<<endl;
  delete []ptr;
  cout<<endl;
  return 0;
  }
