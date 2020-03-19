#include<stdio.h>
void factors_of(int);
int main(void)
{
    int num;
    printf("Enter a number \n");
    scanf("%d",&num);
    printf("Factors of %d are:\n",num);
    factors_of(num);
    return 0;
}
void factors_of(int a)
     {
       int i=1;
       for(; i<=a;i++)
        {
         if(a%i == 0)
           {
            printf("%d ",i);
           }
        else continue;
       }
    }
