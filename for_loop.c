#include<stdio.h>
int main()
{
int num;
printf("enter the number\n");
scanf("%d",&num);
for(int cnt=10; cnt>=1; cnt--)
{
printf("%d\n",num*cnt);
}
return 0;
}

