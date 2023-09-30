
 //assignment 18: to generate the given table
#include<stdio.h>
void charline(int len,char ch)
{
     int i;
     for (i=0;i<=len;i++)
     {
      printf("%c",ch); 
     }
   printf("\n");
}
int main()
{ 
      int len;
      char ch;
      printf("enter the length of char:\n");
      scanf("%d",&len);
      getchar();
      printf("enter the charecter:\n");
      scanf("%c",&ch);
       
       
       charline(len,ch);
       printf("DataType \t\t\t  size in Bytes\n");
       charline(len,ch);
       printf("integer \t\t\t\t  4\n");
       charline(len,ch);
       printf("character \t\t\t\t  1\n");
      charline(len,ch);
       printf("float \t\t\t\t\t  4\n");
      charline(len,ch);

return 0;
}
