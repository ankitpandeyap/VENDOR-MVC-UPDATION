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


