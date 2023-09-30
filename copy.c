#include<stdio.h>
int main()
{
int len,brd,i,j;
char ch1,ch2;
printf("enter the lenght and bredth of rectangle\n");
scanf("%d%d",&len,&brd);
getchar();
printf("enter the character :\n");
scanf("%c\t%c",&ch1,&ch2);

for(i=0; i<len; i++)
{
printf("%c",ch1);
}
printf("\n");
for(i=0; i<brd-2; i++)
{
  printf("%c",ch2);
  for(j=0; j<len-2; j++)
  {
  printf(" ");
  }
  printf("%c\n",ch2);
  }
for(i=0; i<len; i++)
{
printf("%c",ch1);
}

printf("\n");

return 0;
}

