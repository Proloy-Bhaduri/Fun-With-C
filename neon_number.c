#include<stdio.h>
#include<stdbool.h>
bool is_neon(int);
void main()
    {
     printf("Neon numbers are only 3 : \n");
     for(int k = 0;k <1000000;k++)
          {
              if(is_neon(k))
                   printf("%d ",k);
          }
     }
    bool is_neon(int neonn)
        {
         int i =0,sq_neon,sq_rem[120],s=0;
         sq_neon = neonn*neonn;
         while(sq_neon!=0)
         {
             sq_rem[i] = sq_neon % 10;
             i++;
             sq_neon = sq_neon/10;
         }
        for(int j = 0 ;j<i;j++)
             s+=sq_rem[j];
        if(s==neonn)
            return true;
        else
            return false;
      }// is_neon() ends
/* Output:
Neon numbers are only 3 :
0 1 9*/
