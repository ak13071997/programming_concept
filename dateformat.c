#include<stdio.h>
void getdate(int *pd, int *pm, int *py)
{
    printf("please enter the day, month and year\n");
    scanf("%d%d%d",&*pd,&*pm,&*py);
}

int main()
{
    int day, month, year;
    getdate(&day, &month, &year);
    printf("%d-%d-%d",day,month,year);
    return 0;
}

