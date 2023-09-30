#include<stdio.h>

int * max(int * num1 , int * num2)
{
  if(*num1>*num2)
  {
    return num1;
  }
   else if(*num2>*num1)
   {
     return num2;
    }
    else
    {
    return NULL;
    }
}
int main()
  {
     int num1,num2;
     printf("enter the two numbers\n");
     scanf("%d%d",&num1,&num2);
     int *ptr=max(&num1,&num2);
     printf("%ls\n",ptr);
     printf("%d\n",*ptr);

return 0;
}
