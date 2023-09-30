#include<stdio.h>
void areaCircum(int r,float *aoc, float *crm)
{

aoc =3.142*r*r;
crm = 2*3.142*r;


}
void areaperi(int l, int b, int *aor, int *por)
{
aor= l*b;
por=2*(l+b);

}
int main()
{
int ch;
printf("Enter 1 for circle\n");
printf("Enter 2 for reactangle\n");
printf("enter 0 for exit\n");
scanf("%d",&ch);
while(ch!=0)
{ 
  
  
  if(ch==1)
  {
  int r;
 
  areaCircum(int r,&aoc,&crm);
  printf("arre of circle is = %f",aor);
printf("circumfernce of circleis=%f\n",crm);

  }
 
}





return 0;
}
