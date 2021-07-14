#include<stdio.h>
int main()
{
    int i,x;
    scanf("%d",&x);
    printf("\n");
if(x%2!=0)
{


    for(i=x-1;i>=2;i=i-2)
        printf("%d ",i);
}
if(x%2==0)
{
    for(i=x;i>=2;i=i-2)
        printf("%d ",i);
}

}


