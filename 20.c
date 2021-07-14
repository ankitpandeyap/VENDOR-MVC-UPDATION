
#include<stdio.h>

int main()
{
    int x;
    char ch;
   while(1)
{

   printf("ENTER YOUR NUMBER TO CHECK ITS DIVISIBILTY \n");
    scanf("%d",&x);
    if(x%5==0)
        printf("NUMBER IS DIVISIBLE BY 5\n");
    else
        printf("NUMBER IS NOT DIVISIBLE BY 5 \n");
    ch=getch();
    if(ch==27)
        exit(0);

}


    return 0;

}
