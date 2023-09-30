#include<stdio.h>
struct typedef book
{
      int bookid;
      char title[100];
      double cost;
}book;
int main()
{
      book B1,B2,*BP;
      printf("enter the book details(bookid,title,cost)\n");
      scanf("%d %s %lf",&B1.bookid,&B1.title,&B1.cost);
      printf("%d %s %lf\n ",B1.bookid,B1.title,B1.cost);

      BP=&B2;

      printf("enter the book details(bookid,title,cost)\n");
      scanf("%d %s %lf",&BP->bookid,&BP->title,&BP->cost);
      printf("%d %s %lf\n ",BP->bookid,BP->title,BP->cost);

return 0;

}
