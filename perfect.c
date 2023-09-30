#include<stdio.h>
int main()
{
 int num,i,sum=0;
 printf("enter the number to be checked:\n");
 scanf("%d",&num);
 for(i=1;i<num;i++)
 {
  if(num%i==0)
  {
   
   sum=sum+i;
  }
  }
(sum==num)?printf("perfect number\n"):printf(" Not a perfect number\n");
return 0;
}
