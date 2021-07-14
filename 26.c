#include<stdio.h>
int main()
{
    int a;
    char ch;

    while(1)
    {
        printf("Enter the year to check its whether it is leap or not\n");
        scanf("%d",&a);
        if(a%4==0)
           printf(" %d is leap year\n",a);
           else
            printf("%d is not an leap year",a);
        ch=getch();
           if(ch==27)
                exit(0);

            }
}
