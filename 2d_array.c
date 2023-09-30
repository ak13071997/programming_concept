#include<stdio.h>
int main()
{
int arr[3][3]={1,2,3,4,5,6,7,8,9};
printf("%u\n",arr);
printf("%u\n",&arr);
printf("%u\n",*arr);
printf("%u\n",**arr);


printf("%u\n",arr+1);
printf("%u\n",&arr+1);
printf("%u\n",*arr+1);
printf("%u\n",**arr+1);

printf("%u\n",arr[1][2]);
printf("%u\n",*(*(arr+1)+2));
printf("%u\n",&*(*(arr+1)+2));
return 0;
}
