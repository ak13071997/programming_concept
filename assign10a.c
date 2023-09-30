#include<stdio.h>
int main()
{
int a,b,c,max;
printf("enter the three differnt numbers\n");
scanf("%d\n%d\n%d",&a,&b,&c);

max=(a>b)?(a>c)?a:c:(b>a)?b:c;

printf("max = %d\n",max);

return 0;
}
