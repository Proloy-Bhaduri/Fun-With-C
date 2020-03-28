#include<stdio.h>
#include<math.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
#include<iso646.h>
bool is_in_array(char c,char a[],int n) // Searching algo
        {
             for(int m=0;m<n; m++)
                   if(a[m]== c)return true ; // if element is found
          return false;
        }

 int int_of_char(char ch)
            {
                int chi = ch - '0';
                return chi;
            }

int main()
        {
            char str[100],h[100]= " ",wrd[100]=" ",money[2000]=" " ,ch_set[]={'0','1','2','3','4','5','6','7','8','9','.'},*word_set1[] ={" ","Hundred","Thousand","Lakh","Crore"};
            char  *digits_set[] ={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
            char *teens_set2[] ={"Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
            char  *t10s_set2[] ={"Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
            int i=0,j,k,p,q,f=0,a,b,unit_place,d_place,d1_place;
            printf("Enter the amount in digits without spaces:\n");
            scanf("%s",&str);
            p = sizeof(ch_set)/sizeof(char);
            char err_msg[] ="\nPlease enter the amount correctly\nN.B:\n1).Number of digits should be in range 0-12\n 2). Enter strictly two digits after '.'(decimal point)\n3). Don't insert characters other than 0-9\n ";
            q = strlen(str) - 3;
            int len = strlen(str);
            if(len>12) {printf("%s",err_msg);exit(1);}
            if(is_in_array('.',str,strlen(str)))// checking whether the amount conatin a decimal point
                 {
                     if(str[q] != '.' ) {printf("Wrong Format %s",err_msg); exit(0);}
                     a = int_of_char(str[len-2]);
                     b = int_of_char(str[len-1]);
                 }
             else {a=0;b=0;}

            while(str[i]!='\0')
            {
                if(!is_in_array(str[i],ch_set,p)){f=1;break;}
                i++;
            }
            k=0;
           if(strlen(str)>4)
             {j = strlen(str) - 4;}
           else
           { j = strlen(str) - 4;}
             unit_place = str[j] - '0';

             printf("j= %d\nunit_place = %d\n",j,unit_place);
            while(j>=0)
            {
                 d_place = str[j] - '0';
                 d1_place = str[j-1] - '0';
                 printf("%s ",digits_set[d_place-1]);
                  printf("d_place = %d\nd1_place=%d\n ",d_place,d1_place);
                  if(k==0 and d_place>0 and d1_place>1)
                 {
                  d1_place = str[j-1] - '0';
                  strcat(money,t10s_set2[d1_place-1]);
                  strcat(money," ");
                  strcat(money,digits_set[d_place-1]);

                 }
                else if(k==0 and d_place==0  and d1_place>0)
                 {
                  d1_place = str[j-1] - '0';
                  strcat(money,t10s_set2[d1_place-1]);
                  }
                 else if(k==0 and d_place>0 and d1_place<=0)
                 {
                  strcpy(money," ");
                  strcat(money,digits_set[d_place-1]);
                 }

                 else if(k==0 and d_place>0 and d1_place==1)
                 {
                  strcpy(money," ");
                  strcat(money,teens_set2[d_place-1]);

                 }
                  else if(k == 2 and d_place>0)
                 {
                     strcat(h,digits_set[d_place-1]);
                     strcat(wrd,word_set1[k-1]);
                     strcat(h," ");
                     strcat(h,wrd);
                     strcat(h," ");
                     strcat(h,money);
                     strcpy(money,"");
                     strcat(money,h);
                 }

                  else if(k == 3 and d_place!=0 and d1_place>0)
                 {
                     strcpy(h,"");
                     strcat(h,t10s_set2[d1_place-1]);
                     strcat(h," ");
                     strcat(h,digits_set[d_place-1]);
                     strcat(h," ");
                     strcat(h,word_set1[k-1]);
                     strcat(h," ");
                     strcat(h,money);
                     strcpy(money,"");
                     strcat(money,h);
                 }
                 else if(k == 3 and d_place!=0 and d1_place<=0)
                 {
                     strcpy(h,"");
                     strcat(h," ");
                     strcat(h,digits_set[d_place-1]);
                     strcat(h," ");
                     strcat(h,word_set1[k-1]);
                     strcat(h," ");
                     strcat(h,money);
                     strcpy(money,"");
                     strcat(money,h);
                 }
                 else if(k == 3 and d_place==0 and d1_place>0)
                 {
                     strcpy(h,"");
                     strcat(h,t10s_set2[d1_place-1]);
                     strcat(h," ");
                     strcat(h,word_set1[k-1]);
                     strcat(h," ");
                     strcat(h,money);
                     strcpy(money,"");
                     strcat(money,h);
                 }

                 else if(k == 5 and d_place!=0 and d1_place>0)
                 {
                     strcpy(h,"");
                     strcat(h,t10s_set2[d1_place-1]);
                     strcat(h," ");
                     strcat(h,digits_set[d_place-1]);
                     strcat(h," ");
                     strcat(h,word_set1[k-2]);
                     strcat(h," ");
                     strcat(h,money);
                     strcpy(money,"");
                     strcat(money,h);
                 }
                 else if(k == 5 and d_place!=0 and d1_place<=0)
                 {
                     strcpy(h," ");
                     strcat(h,digits_set[d_place-1]);
                     strcat(h," ");
                     strcat(h,word_set1[k-2]);
                     strcat(h," ");
                     strcat(h,money);
                     strcpy(money,"");
                     strcat(money,h);
                 }
                 else if(k == 5 and d_place==0 and d1_place>0)
                 {
                     strcpy(h,"");
                     strcat(h,t10s_set2[d1_place-1]);
                     strcat(h," ");
                     strcat(h," ");
                     strcat(h,word_set1[k-2]);
                     strcat(h," ");
                     strcat(h,money);
                     strcpy(money,"");
                     strcat(money,h);
                 }
                  else if(k == 7 and d_place!=0 and d1_place>0)
                 {
                     strcpy(h," ");
                     strcat(h,t10s_set2[d1_place-1]);
                     strcat(h," ");
                     strcat(h,digits_set[d_place-1]);
                     strcat(h," ");
                     strcat(h,word_set1[4]);
                     strcat(h," ");
                     strcat(h,money);
                     strcpy(money,"");
                     strcat(money,h);
                 }
                 else if(k == 7 and d_place!=0 and d1_place<=0)
                 {
                     strcpy(h," ");
                     strcat(h,digits_set[d_place-1]);
                     strcat(h," ");
                     strcat(h,word_set1[4]);
                     strcat(h," ");
                     strcat(h,money);
                     strcpy(money,"");
                     strcat(money,h);
                 }
                  else if(k == 7 and d_place==0 and d1_place>0)
                 {
                     strcpy(h," ");
                     strcat(h,t10s_set2[d1_place-1]);
                     strcat(h," ");
                     strcat(h,word_set1[4]);
                     strcat(h," ");
                     strcat(h,money);
                     strcpy(money,"");
                     strcat(money,h);
                 }
                // else if(k == 4 or k == 6 or k ==8) continue;
                j--;
                k++;
            }
             printf("money = %s\n",money);
            char Paisa[] = " ";
             printf("\nstr[len-2]=%d; and %d *2 = %d\nk=%d\n\n",a,a,a*2,k);
              if(a==1 and b!=0)
                   strcat(Paisa,teens_set2[b-1]);
              else if(a==0 and b!=0)
                  strcat(Paisa,digits_set[b-1]);
              else if(a>0 and b==0)
                  strcat(Paisa,t10s_set2[a-1]);
              else if(a==0 and b==0)
                 strcat(Paisa,"zero");
              else
               {
                 strcat(Paisa,t10s_set2[a-1]);
                 strcat(Paisa," ");
                 strcat(Paisa,digits_set[b-1]);
               }
              printf(" INR %s = Rupees %s and %s paisa",str,money,Paisa);
              if(f!=1) printf("\n\n%s is valid\nsizeof(%s)=%d",str,str,strlen(str));
              else printf(err_msg);//valid statement
             return 0;
        }
