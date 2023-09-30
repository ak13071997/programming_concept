#include<stdio.h>
void areacircum(int r, double * aoc, double * coc)
{
    *aoc=r*r*3.142;
    *coc=2*r*3.142;
}
void areaperi(int l, int w, int * aor, int * por)
{
    *aor=l*w;
    *por=2*(l+w);
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
             areacircum(r,&aoc,&coc);
             printf("area of circle = %lf\n",aoc);
             printf("circumference of a circle is = %lf",coc);
             break;
      case 2:
             printf("enter the lenght l & width w\n");
             scanf("%d\n%d\n",&l,&w);
             areaperi(l,w,&aor,&por);
             printf("area of rectangle is = %d",aor);
             printf("perimeter of rectangle is = %d",por);
             break;
    default :
             printf("invalid");
      }       
return 0;
}
