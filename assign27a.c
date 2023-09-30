#include<stdio.h>

void accept(int mtx[][3], int i, int j)
{
for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
    scanf("%d",&mtx[i][j]);
    }
}

}

void display(int (*mtx)[3],int  i, int j)
{ int temp[3][3];
for(i=0; i<3; i++)

{
    for(j=0; j<3; j++)
    {
    printf("%d  ",mtx[i][j]);
    }
    printf("\n");
}
printf("\n");
printf("transpose of a matrix is :\n");
for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
       temp[j][i]=mtx[i][j];
    }  
} 
for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
     printf("%d  ",temp[i][j]);
    }  
printf("\n");
}
}
int main()
{
int mtx[3][3],i,j;
printf("enter the matrix element \n");

accept(mtx,i,j);
display(mtx,i,j);



return 0;
}
