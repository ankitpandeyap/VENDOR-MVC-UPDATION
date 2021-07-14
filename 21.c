#include<stdio.h>
int main()
{
    int x,y;
    char ch;
    while(1)
    {
    printf("ENTER TWO NUMBER TO FIND GREATER NUMBER \n");
    scanf("%d%d",&x,&y);
    if(x>y)
      {

       printf("%d IS GREATER NUMBER \n",x);
      }
    else if(y>x)
     {
         printf("%d IS GREATER NUMBER \n",y);
         }
        else if (x==y)
            printf("BOTH NUMBER ARE EQUAL\n");
        ch=getch();
        if(ch==27)
            exit(0);
    }

}
