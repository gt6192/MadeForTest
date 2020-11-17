#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<ctype.h>

void gotoxy(int column, int line);

COORD coord = {0,0};
    void gotoxy(int x, int y)
    {
        coord.X = x; coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }


int main()
{
    char s[2], fname[9][20], lname[9][20], mi[9], remarks[9][20];
    int i, grade[9], prelim[9], midterm[9], finals[9], avggrade[9], temp;
    int len = 2, y=5;

    printf("Enter the Data of students : \n");
    for(i=0;i<=len-1;i++)
    {
        printf("Name > \n");
        gets(fname[i]);
        printf("Last Name > \n");
        gets(lname[i]);
        printf("MI > \n");
        scanf("%c",&mi[i]);
        printf("Grade > \n");
        scanf("%d",&grade[i]);
        printf("Prelim > \n");
        scanf("%d",&prelim[i]);
        printf("Midterm > \n");
        scanf("%d",&midterm[i]);
        printf("Finals > \n");
        scanf("%d",&finals[i]);
        temp = (prelim[i] + midterm[i] + finals[i])/100;
        avggrade[i] = temp;
        printf("Remark > \n");
        gets(s);
        gets(remarks[i]);
    }

    system("CLS");
    gotoxy(1,1);
    printf("\nData : \n");
    gotoxy(10,4);
    printf("|Name");
    gotoxy(20,4);
    printf("|LName");
    gotoxy(30,4);
    printf("|MI");
    gotoxy(40,4);
    printf("|Grade");
    gotoxy(50,4);
    printf("|Prilium");
    gotoxy(60,4);
    printf("|Midterm");
    gotoxy(70,4);
    printf("|Final");
    gotoxy(80,4);
    printf("|Avggrade");
    gotoxy(90,4);
    printf("|Remark");
    for(i=0;i<=len-1;i++)
    {
        gotoxy(1, y);
        printf("|%d",i+1);
        gotoxy(10, y);
        printf("|%s", fname[i]);
        gotoxy(20, y);
        printf("|%s", lname[i]);
        gotoxy(30, y);
        printf("|%c",mi[i]);
        gotoxy(40, y);
        printf("|%d",grade[i]);
        gotoxy(50, y);
        printf("|%d",prelim[i]);
        gotoxy(60, y);
        printf("|%d",midterm[i]);
        gotoxy(70, y);
        printf("|%d",finals[i]);
        gotoxy(80, y);
        printf("|%d",avggrade[i]);
        gotoxy(90, y);
        printf("|%s", remarks[i]);
        printf("\n");
        y++;
    }
}
