#include<stdio.h>
void accept(int arr[][100], int c, int r)          //subscript notation
{
int i,j;
for(i=0; i<r; i++)
{
    for(j=0; j<c; j++)
    {
       scanf("%d",&arr[i][j]);     // (*(*arr+i)+j)
    }
}
}
void display(int (*arr)[100], int c, int r)                     //pointer notation
{
int i,j;
for(i=0; i<r; i++)
{
    for(j=0; j<c; j++)
    {
       printf("%d  ",arr[i][j]);
    }
    printf("\n");
}
printf("\n");
}
int main()
{
int arr[100][100],r,c;
printf("enter the rows and column\n");
scanf("%d%d",&r,&c);
printf("enter the element of an array\n");
scanf("%d",&arr[r][c]);
accept(arr,c,r);
display(arr,c,r);

return 0;
}
