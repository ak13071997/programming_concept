#include<stdio.h>
struct book
{
int bookid;
char title[100];
double cost;
};
void display(struct book B1[5])
{
int i;
  for(i=0; i<5; i++)
  {
    printf("%d %s %lf\n ",B1[i].bookid,B1[i].title,B1[i].cost);
  }
printf("\n");
}
int main()
{
   struct book B1;
   struct book B1[5];
   printf("enter the book details(bookid,title,cost)\n");
   int i;
   for(i=0; i<5; i++)
    {
       scanf("%d %s %lf",&B1[i].bookid,&B1[i].title,&B1[i].cost);
    }

display(B1);


return 0;

}
