#include<stdio.h>
int main()
{
      int match=21;
      int ch;
      int sum=0;

for(int i=0; i<4; i++){
      printf("choose between 1 to 4\n");
      scanf("%d",&ch);

switch(ch)
{
     case 1:
            printf("user enter 1 \n");
            printf("computer choose 4 \n");
            sum=sum+ch+4;
            printf("total is = %d\n" , sum);
            break;
     case 2:
            printf("user enter 2 \n");
            printf("computer choose 3 \n");
            sum=sum+ch+3;
            printf("total is = %d\n" , sum);
            break;
     case 3:
            printf("user enter 3 \n");
            printf("computer choose 2 \n");
            sum=sum+ch+2;
            printf("total is = %d\n" , sum);
            break;
     case 4:
            printf("user enter 4 \n");
            printf("computer choose 1 \n");
            sum=sum+ch+1;
            printf("total is = %d\n" , sum);
            break;
    }
}
if(match-sum==1)
{
     printf("computer wins user lost\n");
}
else
{
     printf("user wins");
}
return 0;
}
