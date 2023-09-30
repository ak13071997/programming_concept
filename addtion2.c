#include<stdio.h>
// addition of two matrix using function call 
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

void result(int mtx[][3],int (*mtx2)[3],int add[][3], int i, int j)
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

int main()
{
int mtx[3][3],i,j;
int mtx2[3][3];
int add[3][3]={0};
printf("enter the first matrix element \n");

accept(mtx,i,j);
display(mtx,i,j);
printf("enter the second matrix element \n");

accept(mtx2,i,j);
display(mtx2,i,j);
 
printf("the addition is: \n");                 //resultant matrix

result(mtx,mtx2,add,i,j);

return 0;
}
