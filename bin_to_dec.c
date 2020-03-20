//works fine up to 10 bits binary digits  
#include<stdio.h>
#include<math.h>
 int main() {
            int num ,dec=0,rem,f = 0,i=0;
             printf("Enter a binary number:\n");
             scanf("%d",&num);
             int bin = num;
              while(num!=0)
              {
                  rem = num % 10;
                  if(rem!=0 && rem !=1) { f=1; break;}
                  else
                     dec +=  rem * pow(2,i);
                  i++;
                  num/=10;
              }
             if(f!=1) printf("Decimal value of %d is %d\n",bin,dec);
             else printf("Not a binary number");
             return 0;
        }
