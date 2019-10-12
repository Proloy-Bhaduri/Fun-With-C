
/* C Program to find the value of e^x using exponential function , and x is taken from the user */ 
#include<stdio.h>
#include<math.h>
 float fact(float);

  int main()
    {
      int i,p,q,k;
      float s=0;
      printf("Enter the number of terms you want to see in the exponential function\n");
      scanf("%d",&p);
      printf("The series of e^x up to %d terms is :\n",p);
      for(i=0;i<=p;i++)
            printf(" (x^%d/%d!) + ",i,i);
      printf("\nEnter the value of x: \n");
      scanf("%d",&q);
      for(i=0;i<=p;i++)
           {
            s = s + (float) {pow(q,i)/fact(i)};
       /* Write an unique line instead of the above line to minimize the complexity of this program*/ 
            };
       printf("The value of e^%d using exp. function up to %d terms is: %0.11f ",q,p,s);

    }//end of main 
    float fact(float a)
      {
        int j; 
        float fact=1.0f;
        for(j=1;j<=a;j++) fact = fact * j;
        if(a==0) return 1.0f;
        else return fact;
      }
