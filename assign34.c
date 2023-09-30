#include<stdio.h>
#include<string.h>

struct employee
{
   int empid;
   char ename[20];
   double salary;
};

int main()
{
  struct employee e;
  e.empid = 1;
  strcpy(e.ename, "akshay");
  e.salary = 34234.234;
  struct employee e1;
  e1 = e;
  printf("%d\n",e1.empid);
  printf("%s\n",e1.ename);
  printf("%lf\n",e1.salary);
}
