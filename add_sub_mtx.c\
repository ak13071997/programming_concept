#include<stdio.h>
// Addition & subtraction of two matrix using function call

void accept(int mtx[][3], int i, int j)               // accept matrix values from user
{
for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
    scanf("%d",&mtx[i][j]);
    }
}
}

void display(int (*mtx)[3],int  i, int j)           //display the user enter value in matrix form
{
for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
    printf("%d  ",mtx[i][j]);
    }
    printf("\n");
}
printf("\n");
}

void addition(int mtx[][3],int (*mtx2)[3],int (*add)[3],int i, int j)
{
for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
    add[i][j]=mtx[i][j]+mtx2[i][j];
    printf("%d  ",add[i][j]);
    }
    printf("\n");
}
printf("\n");
}
void subtraction(int mtx[][3],int (*mtx2)[3],int (*sub)[3],int i, int j)
{
for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
    sub[i][j]=mtx[i][j]-mtx2[i][j];
    printf("%d  ",sub[i][j]);
    }
    printf("\n");
}
printf("\n");
}




int main()
{
int mtx[3][3],i,j;
int mtx2[3][3];
int add[3][3]={0};
int sub[3][3]={0};
int ch;
printf("enter the first matrix element \n");

accept(mtx,i,j);
display(mtx,i,j);
printf("enter the second matrix element \n");

accept(mtx2,i,j);
display(mtx2,i,j);

printf("enter 1 for addition & 2 for subtraction : \n");
scanf("%d",&ch);
switch(ch)
{
case 1 : 
        printf("the addition is: \n");   //resultant matrix
        addition(mtx,mtx2,add,i,j);
        break;
case 2 :        
        printf("the subtraction is: \n");   //resultant matrix
        subtraction(mtx,mtx2,sub,i,j);
        break;
default : 
        printf("invalid.....\n");
}        
           
/*for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
    add[i][j]=mtx[i][j]+mtx2[i][j];
    printf("%d  ",add[i][j]);
    }
    printf("\n");
}
printf("\n");*/

return 0;
}
