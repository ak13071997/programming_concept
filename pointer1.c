#include<stdio.h>
int main()
{
 int a = 10;
 int * ptr = &a;
 printf("%u   %d   %u\n" ,a , *ptr , &a);
 return 0;
}
