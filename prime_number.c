//gcc 5.4.0
#include  <stdio.h>
int main(void)
{
    int num,i=2,flag=0;
    printf("Enter a number \n");
    scanf("%d",&num);
   for(; i<num;i++)
    {
         if(num%i == 0)
         {
            flag = 1;
            break;
         }
      else continue;
    }
    if(flag == 0)
        printf("\nPrime");
    else
        printf("\n %d Not Prime as it is divisible by %d",num,i);
    return 0;
}
