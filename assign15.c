#include<stdio.h>

int main()
{
   for(int m1=1;m1<=3;m1++)
   {
      for(int m2=1;m2<=3;m2++)
      
        { 
            for(int m3=1;m3<=3;m3++)
            
           {
                if(m1!=m2 && m1!=m3 && m2!=m3)
                {
                    printf("%d%d%d\n",m1,m2,m3);
                }
           } 
            
            
        }      
      
      
  }

return 0;
}

