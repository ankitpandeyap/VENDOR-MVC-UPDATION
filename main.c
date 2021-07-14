#include<Stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>

void areaofcircle(void);
void changecursorposition(void);
void math1(void);
void math2(void);
void printc(void);
void enteronlyinteger(void);
void gotoxy(int,int);
void swap(void);
void swapwithoutinteger(void);
void evenodd(void);
void movecursor(void);
void greatertwo(void);
void multiplicationtable(void);
void greaterthree(void);
void quadroots(void);
void leapyear(void);
void ascii(void);
int main()
{
    while(1)
    {

    int x;
    printf("\n");
     printf("WELCOME TO PROGRAM \n");
    printf("\n");
    printf("1. To Find The Area Of Circle\n");
    printf("2. TO Change Cursor Position\n ");
    printf("3. maths question for me\n ");
    printf("4.2nd maths question\n ");
    printf("5. print %% sign\n");
    printf("6. a program that allows integer input only\n");
    printf("7. to swap integer with third variable\n");
    printf("8. to swap integer without integer\n");
    printf("9. to find a number is even or not\n");
   printf("10. to move cursor and written thing with each keystrokes\n");
   printf("11. to find greater number between two number\n");
printf("12. to print a multiplication table of a number\n");
printf("13. to find greatest number between three numbers\n");
  printf("14. to find the roots of quadratic equations\n");
  printf("15. to check leap year\n");
  printf("16. to find ascii value of character \n");
    scanf("%d",&x);


     switch(x)

{

 case 1:
    {


        areaofcircle();
        break;
    }

 case 2:
    {


        changecursorposition();

        break;
    }

 case 3:
    {


        math1();
   break;
    }
 case 4:
    {


    math2();
    break;
    }
 case 5:
    {


        printc();
    break;
    }
 case 6:
    {


        enteronlyinteger();
    break;
    }
 case 7:
    {
        swap();
        break;
    }
 case 8:
    {
        swapwithoutinteger();
        break;
    }
 case 9:
    {
        evenodd();
        break;
    }
 case 10:
    {
        movecursor();
        break;
    }
 case 11:
    {
        greatertwo();
        break;
    }
 case 12:
    {
        multiplicationtable();
        break;
    }
 case 13:
    {
        greaterthree();
        break;
    }
 case 14:
    {
        quadroots();
        break;
    }
 case 15:
    {
        leapyear();
        break;
    }
 case 16:
    {
        ascii();
        break;
    }
}
    }
}


void areaofcircle()
{

int a;
float b;
printf("ENTER THE RADIUS OF CIRCLE\n");
scanf("%d",&a);
b=3.14*a*a;
printf("THE AREA OF CIRCLE FOR RADIUS %d IS %f\n ",a,b);
getch();
}

void changecursorposition()
{
    int x=12,y=12;


    gotoxy(x,y);

printf("MY NAME IS ANKIT");
getch();
}
void gotoxy(int x,int y)
{
    COORD c;

    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void math1()
{
     int i=3,j;
    j=++i*++i*++i;
    printf("%d\n",j);
}
void math2()
{
    int a=1,i=1;
a=2+2*i++;
printf("%d   %d \n",a,i);
}
void printc()
{
    printf("%%c\n");
}
void enteronlyinteger()
{
    int num=0,i;
       printf("you have enter number \n");
       do
       {
           i=getch();
           if(i>=48&&i<=57)
           {
               printf("%c\n",i);
               num=num*10+(i-48);
           }
             if(i==13)
                break;

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
      /* a= 10 b=20
       a=30  b=20 a=a+b
       a=30 b=10  b=a-b
       a=20 b=10  a=a-b
                      */
}
void evenodd()
{
     int x;
 printf("Enter the number to find it whether even or odd\n");
 scanf("%d",&x);
 if(x&1)
        printf("odd\n");
 else
    printf("even\n"); // even number have least significant bit (last) 0
                       // odd number have 1 last bit
                        // most significant bit (first) for negative number is 1
                        // positie nuber is 0
}
void movecursor()
{
    int x=40,y=13;
    char ch;

   gotoxy(x,y);
    printf("Ankit Pandey");

    while(1)
    {
        ch=getch();
        switch(ch)
       {

    case '6':
        x++;
        break;
    case '4':
        x--;
        break;

    case '2':
        y++;
        break;
    case '8':
        y--;
        break;

    case 27:
        exit(0);
       }
        system("cls");
        gotoxy(x,y);
        printf("Ankit Pandey");
    }
}

void greatertwo()
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
void multiplicationtable()
{
    int i,x;
      scanf("%d",&x);
      for(i=1;i<=10;i++)
        printf("%d*%d=%d\n",x,i,(x*i));
}

void greaterthree()
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

void quadroots()
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
void leapyear()
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
void ascii()
{
     int i;
    char ch;

    ch=getch();
    for(i=1;i<=11;i++)
    {

        printf("%d %c\n",ch,ch);
    }
}
