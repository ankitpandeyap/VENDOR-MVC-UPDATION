#include<stdio.h>

int main()
{
    int z=0;
    void swap(void);
    void swapwithoutinteger(void);
    do
    {
    printf("enter your preference\n");
    printf("1. swap with third integer\n");
    printf("2. swap without third integer\n");
    scanf("%d",&z);


    if(z==1)
    swap();
    else if(z==2)
    swapwithoutinteger();
    else
    exit(0);
   }while(1);
}

void swap()
{
    int a,b,c;
    printf("Enter your number\n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("a=%d b=%d\n",a,b);
    printf("c=%d\n",c);
getchar();
    }

    void swapwithoutinteger()
    {

        int x,y;
        printf("enter two numbers\n");
        scanf("%d%d",&x,&y);
        x=x+y;
        y=x-y;
        x=x-y;
        printf("x=%d y=%d\n",x,y);
    getch();

    }

    /* a= 10 b=20
       a=30  b=20 a=a+b
       a=30 b=10  b=a-b
       a=20 b=10  a=a-b
                      */
