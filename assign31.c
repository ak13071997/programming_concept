#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
 int i,j,len;
 int n =5;
 char *s[50],temp[20],*t;
 
 for(i=0;i<n;i++)
 {
   printf("enter the name:\n");
   scanf("%s",temp);
   len=strlen(temp);
   s[i]=(char *) malloc (sizeof(char)*len+1);
   strcpy(s[i],temp); 
 }
 for(i=0;i<n-1;i++)
 {
   for(j=i+1; j<n; j++)
   {
     if(strcmp(s[i] , s[j])>0)
     { 
      t=s[i];
      s[i]=s[j];
      s[j]=t;
     }
   }
}
 
 for(i=0;i<n;i++)
 printf("%s\n",s[i]);
 free(s[i]);              //to avoid memory leakage
 return 0;
 }
