#include<stdio.h>
#include<stdlib.h>
//malloc ,calloc,realloc,free
{
int *arr,i,n;
printf("how many integers :\n");
scanf("%d",&n);
printf("print integers:\n");
arr=(int *)malloc(sizeof(int)*n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++)
printf("%d",arr[i]);
free(arr);
arr = NULL;
return 0;
}

