#include<iostream>
using namespace std;
int main()
{
  int i;
  int *ptr=(int *)calloc(4,sizeof(int));
  cout<<"enter the fou integers"<<endl;
  for(i=0;i<4;i++)
  cin>>ptr[i];
  ptr=(int *)realloc(ptr,sizeof(int)*7);
  cout<<"enter the wo more numbers"<<endl ;
  
  for(i=0;i<7;i++)
  cout<<ptr[i]<<"  "<<endl;
  delete []ptr;
  cout<<endl;
  return 0;
  }
