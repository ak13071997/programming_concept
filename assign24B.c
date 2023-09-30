#include<stdio.h>
// min and max of matrix, multipal by 5
void maxmin(int a[][10], int n)
{
int i,max,min;

max=a[0][0];
    for(i=1; i<n; i++)
    {
      for(int j=0; j<n; j++){
       if(a[i][j]>max)
            max=a[i][j];
}
}
}

printf(" max number is =%d",max);


  min=a[0][0];
    for(i=1; i<n; i++)
    {
       for(int j=0; j<n; j++)
       {
    if(a[i][j]<min)
    {
        min=a[i][j];
    }
    }
}
printf(" min number is =%d",min);
}

void accept(int arr[][10], int n)
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

void display(int arr[][10], int n)
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

void mulbyfive(int arr[][10], int n)
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

      int arr[10][10],n,i,j,a[5]={14,61,35,75,1};
      printf("how many elements you want in an Array \n");
      scanf("%d",&n);
      printf("enter the integers \n");

      accept(arr,n);
     display(arr,n);

      printf(" matrix multiply by five is : \n");

      mulbyfive(arr,n);
      
      maxmin(arr,n);
      return 0;
}


 
