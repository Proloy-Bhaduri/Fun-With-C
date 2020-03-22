#include<stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
int days_of(int,int);
bool is_leapyear(int);
int main()
    {
        int DD,MM,YY,CR_D,CR_M,CR_Y,age_d,age_m,age_y;
        time_t now;
        time(&now);
        struct tm *local = localtime(&now);
        CR_D = local ->tm_mday;
        CR_M =local->tm_mon + 1;
        CR_Y = local ->tm_year + 1900;
        printf("Today: %02d/%02d/%02d\n ",CR_D,CR_M,CR_Y);
        printf("Enter your DOB \n Date <enter> Month <enter> Year<enter>:\n ");
        scanf("%d%d%d",&DD,&MM,&YY);
        if(CR_D>=DD && CR_M > MM && CR_Y>YY)
        {
            age_d = CR_D-DD;
            age_m = CR_M - MM;
            age_y = CR_Y - YY;
        }
        else if (CR_D>=DD && CR_M < MM & CR_Y>YY)
        {
            age_d = CR_D - DD;
            age_m = 12+(CR_M - MM);
            age_y = (CR_Y - YY) - 1;
        }
        else if (CR_D<=DD && CR_M > MM & CR_Y>YY)
        {
            age_d = days_of(MM,YY)- abs(DD - CR_D);
            age_m = (CR_M - MM)-abs(DD - CR_D);
            age_y = (CR_Y - YY);
        }
        else if (CR_D<=DD && CR_M < MM & CR_Y>YY)
        {
            age_d = days_of(MM,YY)- abs(DD - CR_D);
            age_m = 12 - (MM - CR_M)- 1 ;
            age_y = (CR_Y - YY) - 1;
        }
        else if(DD>CR_D && MM == CR_M)
        {
            age_d = 31 - ( DD - CR_D );
            age_m = 11;
            age_y = CR_Y - YY-1;
        }
        else
        {
            printf("Invalid Input\n"); exit(0);
        }
         printf("\nYour age is: %02d Years %02d Months %02d Days\n",age_y,age_m,age_d);
        return 0 ;
    }
    int days_of(int m,int y)
        {
            switch(m)
                {
                   case 2: if(is_leapyear(y))return 29 ; else return 28;break;
                   case 4: return 30;break;
                   case 6: return 30;break;
                   case 9: return 30;break;
                   case 11: return 30;break;
                   default: return 31;break;
               }
        }
  bool is_leapyear(int yy)
     {
       if( yy%4 ==0 && yy %100 != 0 || yy%400==0)
         return true;
       else return false;
     }
