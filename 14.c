#include<stdio.h>
int main()
{
    /*
    the logic here is in c language when we use integer to print the value
    of particular integer it doesn't print the decimal value only the integer value
    so in c  x/2*2!=x eg 5/2*2!=5 but it is 4 but in actual maths it 2.5 so we can use this logic to find
    even or odd  number and even numbers follow above logic*/

   do
   {

    int x;
    int e;
    printf("to exit the application press 'e'\n");
    printf("to continue press any key\n");
    printf("enter your number\n");
    scanf("%d",&x);

    if(x/2*2==x)
        printf("even\n");
    else
       {

        printf("odd\n");}
          e=getch();
if(e==101)
break;

   }while(1);
}
