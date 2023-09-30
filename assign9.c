#include<stdio.h>
int main()
{
   int a,b,ch;
   double  ans;
   printf("enter the two numbers to be solve\n");
   scanf("%d%d",&a,&b);
   printf("1-addition\n");
   printf("2-subtraction\n");
   printf("3-multication\n");
   printf("4-division\n");
   scanf("%d",&ch);
   switch(ch)
   {
       case 1:
              ans=a+b;
              printf("the addition is = %lf\n",ans);
              break;
       case 2:
              ans=a-b;
              printf("the subtraction is = %.2lf\n",ans);
              break;
       case 3:
              ans=a*b;
              printf("the multiplication is =%lf\n",ans);
              break;
       case 4:
              ans=a/b;
              printf("the division is =%lf\n",ans);
              break;
       default:
              printf("invalid choice");
              break;
    }
return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
   
  
