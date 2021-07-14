#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    float D,x,y;
    char ch;

   while(1)
   {
      printf("enter coefficient of x^2\n");
      scanf("%d",&a);
      printf("enter the coefficient of x\n");
      scanf("%d",&b);
      printf("enter the constant coefficient \n");
      scanf("%d",&c);

      D=b*b-4*a*c;
      if(D<0)
        printf("there is no real roots of following equation\n");
      else if(D==0)
      {
          printf("the roots are equal\n");
          x=-b/(2.0*a);
          printf("%f is root of equation",x);
      }
      if(D>0)
      {
          printf("roots are not distinct hence two roots\n");
          printf("are availaible\n");

          x=(-b+sqrt(D))/(2*a);
          y=(-b-sqrt(D))/(2*a);
          printf("%f,%f are two distinct root of above equation\n ",x,y);



      }
         ch=getch();
          if(ch==27)
            exit(0);
   }
}
