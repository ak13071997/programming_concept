#include<stdio.h>
int main()
{
int bs, sa;
float comm=0, ns;
printf("enter the base salary & sales amount\n");
scanf("%d\n%d",&bs,&sa);

if(sa>=5000 && sa<=7500)
{
comm=sa*0.03;
}
else if(sa>=7501 && sa<=10500)
{
comm=sa*0.08;
}
else if(sa>=10501 && sa<=15000)
{
comm=sa*0.11;
}
else if(sa>15000)
{
comm=sa*0.15;
}
ns=bs+comm;
printf("net salary = %f\n",ns);
printf("commission earned = %f\n",comm);
return 0;
}
