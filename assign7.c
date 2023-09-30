#include<stdio.h>
int main()
{
int a,b,c,max;
printf("enter the three differnt numbers\n");
scanf("%d\n%d\n%d",&a,&b,&c);

/*(a>b && a>c)?printf("A is a max num"):printf(" ");
(b>a && b>c)?printf("B is a max num"):printf(" ");
(c>b && c>a)?printf("C is a max num"):printf(" ");
*/

max=(a>b)?(a>c)?a:c:(b>a)?b:c;

printf("max = %d\n",max);

return 0;
}
