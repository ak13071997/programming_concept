#include<iostream>
using namespace std;

template<typename T>
void sort(T *arr,int n)
{
  int i,j;
  T temp;
  for (i=0; i<n-1;i++)
      {
          for(j=i+1; j<n; j++)
           {
             if(arr[i]>arr[j])
             {
                 temp=arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
             }
           }          
      }

}

int main()
{
   float arr[100];
   int n;
   cout<<"how many integers  "<<endl;
   cin>>n;
   
   cout<<"enter the integers "<<endl;
   for(int i=0; i<n; i++)
   {
        cin>>arr[i];
   }
   sort(arr,n);
   for(int i=0; i<n; i++)
   {
        cout<<arr[i]<<"  ";
   }
cout<<endl;
return 0;
}
