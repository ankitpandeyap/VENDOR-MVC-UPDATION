#include<stdio.h>

int main()
{
    int x;
    char ch;
   while(1)
{

   printf("ENTER YOUR NUMBER TO CHECK IT IS EVEN OR NOT \n");
    scanf("%d",&x);
    if(x%2==0)
        printf("even\n");
    else
        printf("odd\n");
    ch=getch();
    if(ch==27)
        exit(0);

}


    return 0;

}
