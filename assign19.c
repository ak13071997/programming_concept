#include<stdio.h>
void Fibonacci(int terms)
{
    int first=0,second=1;
    int next;
    while(terms>2)
    {
        next=first+second;
        printf(" %d ",next);
        first=second;
        second=next;
        terms--;
        }
     printf("\n");
}
int main()
{
      int terms;
      printf("enter the terms of fibonacci series?\n");
      scanf("%d",&terms);
      printf("0,  1,   ");
      Fibonacci(terms);
      return 0;
}
