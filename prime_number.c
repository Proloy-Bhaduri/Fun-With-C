//gcc 5.4.0
#include  <stdio.h>
int main(void)
{
    int i=2,flag=0;
    long num;
    printf("Enter a number \n");
    scanf("%ld",&num);
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
        printf("\n %ld Not Prime as it is divisible by %d",num,i);
    return 0;
}
