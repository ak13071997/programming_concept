#include<stdio.h>
int fact(int n)
{
      int f=1;
      do{
      f=f*n;
      n--;
      }
      while(n>0);
      return f;
      }

float power(float base, int index)
      {
      int i ;
      float p =1.0f;
      for(i=0;i<index;i++)
      {
      p=p*base;
      }

      return p;
      }
int main()
{ 
      int angle;
      float x,result;
      printf("Enter the angle in degree:\n");
      scanf("%d",&angle);
      x=(3.142f/180)*angle;
      result=x-(power(x,3)/fact(3))+(power(x,5)/fact(5))-(power(x,7)/fact(7))       +(power(x,9)/fact(9));
      printf(" sine value is %.3f\n",result);
return 0;
}
