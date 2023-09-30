#include<stdio.h>
// min and max of matrix, multipal by 5
void maxmin(int a[], int n)
{
int i,max,min;

max=a[0];
    for(i=1; i<5; i++)
    {
       if(a[i]>max)
       {
           max=a[i];
       }
}
printf(" max number is =%d",max);


   min=a[0];
    for(i=1; i<5; i++)
    {
    if(a[i]<min)
    {
        min=a[i];
    }
}
printf(" min number is =%d",min);
}
void accept(int arr[][100], int n)
{
int i, j;
for(i=0; i<n; i++)           //to read the user array
{
  for(j=0; j<n; j++)
  {
     scanf("%d",&arr[i][j]);
   }
}
}
void display(int arr[][100], int n)
{
int i, j;
for(i=0; i<n; i++)           //to write the user array
{
   for(j=0; j<n; j++)
   {
      printf("%d ",arr[i][j]);
   }
   printf("\n");
}
printf("\n");

}

void mulbyfive(int arr[][100], int n)
{
    int i, j;
    int temp[100][100];
    for(i=0; i<n; i++)
    {
       for(j=0; j<n; j++)
       {
       temp[i][j]=arr[i][j]*5;
       }
    }
for( i=0; i<n; i++)
{
  for(j=0; j<n; j++)
  {
      printf("%d ",temp[i][j]);
  }
   printf("\n");
}
printf("\n");
}
int main()
{

      int arr[100][100],n,i,j,a[5]={14,61,35,75,1};
      printf("how many elements you want in an Array \n");
      scanf("%d",&n);
      printf("enter the integers \n");

      accept(arr,n);
      display(arr,n);

      printf(" matrix multiply by five is : \n");

      mulbyfive(arr,n);
      maxmin(a,n);
      return 0;
}


 
