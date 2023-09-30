#include<stdio.h>
int main()
{
int n1,n2,n3,n4,n5;
float avg1,avg2;
printf("enter the five subjects\n");
scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
avg1=(n1+n2+n3+n4+n5)/5.0f;          //implicit type conversion
avg2=((float)n1+n2+n3+n4+n5)/5;       //explicit type conversion
printf("average = %f\t%f\n",avg1,avg2);
return 0;
}

