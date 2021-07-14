#include<stdio.h>
#include<conio.h>
int main()
{
 int x;
 while(1)
 {

  printf("Enter the number to find it whether even or odd\n");
 scanf("%d",&x);
 if(x&1)
        printf("odd\n");
 else
    printf("even\n"); // even number have least significant bit (last) 0
                       // odd number have 1 last bit
                        // most significant bit (first) for negative number is 1
                        // positive number is 0
 }
}
