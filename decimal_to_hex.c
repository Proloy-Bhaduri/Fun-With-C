#include<stdio.h>
char valof(int);
 int main() {
             int hex=0,num,rem,f=0,i=0,j,hd[100];
             scanf("%d",&num);
             while(num!=0)
             {
               rem = num % 16;
               hd[i] = rem;
               i++;
               num/=16;
             }
       for(int j = i-1;j>=0;j--)
            {
              if(hd[j] >=10 && hd[j]<=15)
                    printf("%c",valof(hd[j]));
               else
                    printf("%d",hd[j]);
            }
          return 0;
        }
        char valof(int no)
            {
               switch(no)
                    {
                        case 10: return 'A';break;
                        case 11: return 'B';break;
                        case 12: return 'C';break;
                        case 13: return 'D';break;
                        case 14: return 'E';break;
                        case 15: return 'F';break;
                        default: return 0;break;
                    }
            }
