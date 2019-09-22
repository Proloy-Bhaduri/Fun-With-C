
/* C Program to find the value of e^x using exponential function , and x is taken from the user */ 

#include<stdio.h>
#include<math.h>
 int fact(int);

  int main()
  	{
      int i,p,q,k;
      float s=0;
      printf("Enter the number of terms you want to see in the exponential function\n");
      scanf("%d",&p);
      printf("The series of e^x up to %d terms is :\n",p);
      for(i=0;i<=p;i++)
      {  
         printf(" (x^%d/%d!) + ",i,i);
      }
     printf("\nEnter the value of x: \n");
     scanf("%d",&q);
     for(i=0;i<=p;i++)
            s = s + ((float) pow(q,i)/(float) fact(i));
    printf("The value of e^%d using exp. function up to %d terms is: %f ",q,p,s);
    }//end of main 
  	int fact(int a)
  		{
  			int j,fact=1;
  			for(j=1;j<=a;j++)
  			{
  				fact = fact * j;
  			}
  			if(a==0)
  				return 1;
  			else
  				return fact;
  		}
