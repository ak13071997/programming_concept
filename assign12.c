#include<stdio.h>
#include<math.h>
int main()
{
      int num1,num2,temp,sum=0,n=0;
      printf("enter the number: \n");
      scanf("%d",&num2);
      num1=num2;
      while(num1!=0)
      {
          num1=num1/10;
          n=n+1;
      }
      num1=num2;
      while(num1!=0)
      {
           temp=num1%10;
           sum=sum+pow(temp,n);
           num1=num1/10;
           
      }
      if(num2==sum)
      {
          printf("number is an armstrong number\n");
      }
      else
      {
           printf("number is not an armstrong number\n");
      }
      return 0 ;
}
