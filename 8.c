#include<stdio.h>
int main()
{


       int num=0,i;
       printf("you have enter number \n");
       do
       {
           i=getch();
           if(i>=48&&i<=57)
           {
               printf("%c",i);
               num=num*10+(i-48);
           }
             if(i==13)
                break;

       }while(1);
}
