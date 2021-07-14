#include<stdio.h>
int main()
{
    int a,b,c;
    char ch;
    while(1)
    {
        printf("Enter three number to find the largest\n");
        scanf("%d%d%d",&a,&b,&c);
        if(a>b)
        {
            if(a>c)
                printf("%d is the largest of three number\n",a);

        }
        if(b>c)
        {
            if(b>a)
            printf("%d is the largest of three number\n",b);
        }
        if(c>a)
        {
            if(c>b)
            printf("%d is the largest of three number\n",c);
        }
        ch=getch();
        if(ch==27)
            exit(0);

    }
}
