#include<stdio.h>
int main()
{
int bs;
float gs,ns,pf,da,hra;
printf("enter your base salary\n");
scanf("%d",&bs);

hra=0.15*bs;
da=0.3*bs;

gs=bs+hra+da;

pf=0.125*gs;
ns=gs-pf;

printf("gross salary = %.3f\n net salary =%.3f\n",gs,ns);
return 0;
}
