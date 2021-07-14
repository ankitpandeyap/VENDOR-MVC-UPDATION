#include<stdio.h>
#include<conio.h>

int main()
{
    float a,b;
    char ch;

    while(1)
    {
        printf("enter two numbers\n");
        scanf("%f%f",&a,&b);

        if(a>b)
        {
            printf("%f is greater\n",a);

        }
        else
        {
            printf("%f is greater\n",b);

        }
        ch=getch();
        if(ch==27)
            exit(0);

    }



}
