#include<iostream>
using namespace std;
int main()
{
int n,i;
float *marks,avg,sum=0.0f;
cout<<"enter the number of subject:"<<endl;
cin>>n;
cout<<"enter the marks of subjects:"<<endl;


marks=new float[n];
for(i=0; i<n; i++)
{
cin>>marks[i];
}
for(i=0; i<n; i++)
{
cout<<marks[i]<<"  ";
sum=sum+marks[i];
}

avg=sum/n;
cout<<" "<<endl;
cout<<"average is:"<<avg<<endl;

return 0;
}
