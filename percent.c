#include<stdio.h>
int main()
{
float percent;
printf("enter the percentage:\n");
scanf("%f",&percent);
if(percent>=65
)
{
printf("first class with distinction\n");
}
else if(percent>=60 && percent<65)
{
printf("first class\n");
}
else if(percent>=50 && percent<60)
{
printf("second class\n");
}
else if(percent>=40 && percent<50)
{
printf("pass class\n");
}
else
{
printf("fail\n");
}
return 0;
}
