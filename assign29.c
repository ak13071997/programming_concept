//assignment 29: program for string function
#include<stdio.h>
#include<stdlib.h>
int main()
{
 char str[100],ch;
 int i,count=1,choice;
 
 printf("enter  the charecter string:\n");
 fgets(str,sizeof(str),stdin);         //you can write getchar() 
 
 while(count>0)
 {
     printf("enter 1 to find the number of occurrences of given character\n");
     printf("enter 2 to find the number of blank spaces in a string\n");
     printf("enter 3 to find the number of words in a string \n");
     printf("enter 4 to find the total number of all the vowels in a string\n");
     printf("enter 0 to EXIT\n");
     scanf("%d",&choice);
     switch(choice)
     {
          case 1: 
                 printf("enter the character of which occerence is check :\n");
                 getchar();
                 scanf("%c",&ch);
                 for(int i=0; i<sizeof(str); i++)
                 {
                    if(ch==str[i])
                    {
                     count++;
                     }
                }
                printf("the no. of occerence of character %c is %d \n",ch,count);
                break;
         case 2:       
                count=0;
                for(int i=0; i<sizeof(str); i++)
                {
                   if(str[i]==' ')
                   {
                   count++;
                   }
                }       
                printf(" number of empty spaces are %d \n",count);
                break;
        case 3:
                count=0;
                for(int i=0; i<sizeof(str); i++)
                {
                   if(str[i]==' ')
                   {
                   count++;
                   }
                } 
                count++;
                printf(" total number of words in string are %d \n",count);
                break;
        case 4:
                count=0;
                for(int i=0; i<sizeof(str); i++)
                {
                   if(str[i]=='a' || str[i]=='i' || str[i]=='e' || str[i]=='u' || str[i]=='o')
                   {
                   count++;   
                   }
                }
                printf(" number of vowels in the string are %d \n",count);   
                break;
        case 0:
                exit(0);
        default:
                printf("invalid choice...........\n");
        }
  }      
return 0;
}
