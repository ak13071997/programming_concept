#include<stdio.h>

//function call by value
void areacircum(int r, double aoc, double coc)
{
      aoc=r*r*3.142;
      coc=2*r*3.142;
      printf("area of circle = %lf\n",aoc);
      printf("circumference of a circle is = %lf\n",coc);
}
void areaperi(int l, int w, int * aor, int *  por)
{
      *aor=l*w;
      *por=2*(l+w);
      printf("area of rectangle is = %d\n",*aor);
      printf("perimeter of rectangle is = %d\n",*por);
}
int main()
{
      int r,l,w,ch;
      double aoc,coc;
      int aor,por;
      printf("enter 1 for circle & 2 for rectangle\n");
      scanf("%d",&ch);
      switch(ch)
      {
          case 1:
                 printf("enter the redius r\n");
                 scanf("%d",&r);
                 areacircum(r,aoc,coc);
                 break;
          case 2:
                 printf("enter the lenght l & width w\n");
                 scanf("%d\t%d",&l,&w);
                 areaperi(l,w,&aor,&por);
                 printf(" aor = %d  , por = %d",aor,por);
                 break;
        default :
                 printf("invalid");
          }       
return 0;
}
