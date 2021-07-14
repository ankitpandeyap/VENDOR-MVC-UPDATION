#include<stdio.h>
#include<windows.h>
void gotoxy(int,int);

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
    char ch;
    printf("Please provide coordinates of cursoe\n");
    scanf("%d%d",&x,&y);
    gotoxy(x,y);
    printf("dc");
    while(1)
    {
        ch=getch();
        switch(ch)
        {
        case 8:
            x--;
            break;
        case 32:
            x++;
            break;

        }
        system("cls");
        gotoxy(x,y);
        printf("dc");
    }
}
