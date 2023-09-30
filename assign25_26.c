#include<stdio.h>
#include<stdlib.h>
//insertion and removing
void insertelement(int *arr, int *n)
{
      int val,pos,i;
      printf("insert the value to be inserted inside an array : \n");
      scanf("%d",&val);
      printf("enter the position at which value to be stored in array : \n");
      scanf("%d",&pos);
      for(i=*n; i>pos; i--)
      {
          arr[i]=arr[i-1];
      }
      arr[pos]=val;
      (*n)++;

}
void removeelement(int arr[], int *n)
{
      int pos,i;
      printf("enter the position to be remove from array \n");
      scanf("%d",&pos);
      for(i=pos; i<*n; i++)
      {
           arr[i]=arr[i+1];
      }
      (*n)--;
}

void printArray(int arr[], int n)
{
      int i;
      for(i=0; i<n; i++)
      {
           printf("%d  ",arr[i]);
      }
      printf("\n");
}

int main()
{
      int arr[100],n,i,ch;
      printf("how many array element\n");
      scanf("%d",&n);
      printf("enter the array element\n");
      for(i=0; i<n; i++)
      scanf("%d",&arr[i]);
      for(i=0; i<n; i++)
      printf("%d  ",arr[i]);
      printf("\n");

      printf("enter 1 for insert & 2 for remove : \n");
      scanf("%d",&ch);

      switch(ch)
      {
         case 1: 
                insertelement(arr,&n);
                printArray(arr,n);
                break;
         case 2:
                removeelement(arr,&n);
                printArray(arr,n); 
                break;
         default:
                exit(0);
      }
return 0;
}



