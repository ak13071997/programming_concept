#include<iostream>
#include<string>
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
   string arr[100];
   int n;
   cout<<"how many strings "<<endl;
   cin>>n;
   
   cout<<"enter strings"<<endl;
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
