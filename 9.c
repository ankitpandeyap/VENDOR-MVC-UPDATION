#include<stdio.h>
 int main()
 {
     int chr=0;
     int x;


     do
     {
         x=getch();
         if(x>=97&&x<=122)
            {
                printf("%c",x);
                chr=chr*10+(chr-97);
            }
            if(x>=65&&x<=90)
            {
                printf("%c",x);
                chr=chr*10+(chr-65);
             }
            if(x==13)
                break;
     }while(1);
     return 0;
 }
