#include<stdio.h>
#include<math.h>
 int main() {
             int dec=0,f=0,i=0,j,d;
             printf("Enter number of digits of  the binary number:\n");
             scanf("%d",&d);
             int t = d;
             int num[d];
             printf("Enter the binary number\nN.B: One digit per one key press:\n");
             for(j = 0 ;j<d;j++)
                 scanf("%d",&num[j]);
             for(int k = d-1;k>=0;k--)
                {
                   if(num[k]!=0 && num[k] !=1) { f=1; break;}
                   else
                      dec +=(num[k] * pow(2,i));
                   i++;
                  }
             if(f!=1) printf("Decimal value is %d\n",dec);
             else printf("Not a binary number");
             return 0;
        }
