#include<stdio.h>
#include<windows.h>

void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);

}

int main()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
   gotoxy(x,y);
    printf("Ankit Pandey");

}
