#include<stdio.h>
#include<windows.h>






int main()
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
