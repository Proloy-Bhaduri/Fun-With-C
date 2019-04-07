#include<stdio.h>

main()
 {
 	float percentm,CGPA;

 printf("Enter your CGPA:\n");
 scanf("%f",&CGPA);
 if(CGPA<4.75)
 printf("You have failed");
 else{
 percentm =(CGPA-0.75)*10;
   if(percentm<=99.99)
   {
  printf("---------------------------------------------------------------------------------------------------------\n");
   printf("\nYour marks is %f percents\n",percentm);
     printf("---------------------------------------------------------------------------------------------------------\n");
   }
   else
   {
    printf("Invalid input\n");
   }
   if(percentm>=90.00 && percentm<=99.99)
   {
       printf("Outstanding!Keep it up\n");
   }
   else if(percentm<90.00 && percentm>80)
   {
       printf("Excellent!\nYou can reach the top.\nTry hard");
   }
   else if(percentm>99.99 && CGPA>10.749 && CGPA<=1)
   {
       printf("Please input correctly\n");
   }
    else if(CGPA>10.749)
   {
       printf("Please insert a correct value instead of %d",(int)CGPA);

   }
 }
 return 0;
 }
