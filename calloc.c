#include<stdio.h>
int main()
{
  int i;
  int *ptr=(int *)calloc(4,sizeof(int));
  printf|("enter the fou integers\n")
  for(i=0;i<4;i++)
  scanf("%d",&ptr[i]);
  ptr=(int *)realloc(ptr,sizeof(int)*7);
  printf("enter the two more numbers\n");
  
  for(i=0;i<7;i++)
  scanf("%d",&ptr);
   for(i=0;i<7;i++)
  printf("%d ",ptr[i]);
  
  free(ptr);
  
  printf("\n");
  return 0;
  }
