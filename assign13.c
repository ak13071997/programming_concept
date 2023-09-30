#include<stdio.h>
int main()
{
 int num;
 printf("enter the positive number\n");
 scanf("%d",&num);
 int i;
 int cnt=0;
 if(num==1)
 {
  printf("not prime number");
 }
 for(i=2; i<num; i++)
   {
     if(num%i==0)
   {  
    cnt++;
    }
    
    else
    {

     }
     if(cnt==0)
     {
     printf("prime number\n");
   } 
   
 else
{
printf("not prime number\n");
}
return 0;
}
}



