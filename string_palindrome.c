#include<stdio.h>
#include<string.h>
int main()
    {
        char str[100];
        int i=0,len,mid,f=0;
        scanf("%s",str);
        len = strlen(str);
        mid = len/2;
        while(i<mid)
        {
            if(str[i] != str[len-i-1]) {f=1;break;}
            i++;
        }
        if(f!=0) printf("\nEntered string is Not Palindrome\n");
        else printf("Entered string is Palindrome\n");
        return 0 ;
    }
