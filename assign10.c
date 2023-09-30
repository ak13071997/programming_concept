#include<stdio.h>
int main()

{
int i,j;
for(i=1;i<=5;i++)                      //main iteration
{
   for(j=1;j<=5-i+1;j++)                //print value first iteration
   {
    printf("%d",j);
    }
    for(j=1; j<2*i-1; j++)           //space
    {
    printf(" ");
    }
    printf("\b");
    for(j=5-i+1;j>=1;j--)            //second iteration
    {
    printf("%d",j);
    }
  printf("\n");

}
return 0;
}
