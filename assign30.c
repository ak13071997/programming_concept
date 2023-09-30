#include<stdio.h>
#include<stdlib.h>
//average marks using dynamic memory loaction
int main()
{
    int n,i,*p;
    float marks[100],sum=0.0,avg;

    printf("enter the number of subjects:\n");
    scanf("%d",&n);
    printf("enter the marks: \n");
    p=(float*)malloc(sizeof(float)*n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&marks[i]);
        sum=sum+marks[i];
    }
    avg=sum/n;  
    printf("the average is = %.2f\n",avg);

    free(p);
    p=NULL;


return 0;
}
