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
    int len, y=5;

    printf("Enter the number of students = ");
    scanf("%d", &len);

    char s[2], fname[len][20], lname[len][20], mi[len], remarks[len][20];
    int i, prelim[len], midterm[len], finals[len], avggrade[len], temp;

    gets(s);

    printf("\nEnter the Data of students : \n");
    for(i=0;i<=len-1;i++)
    {
        printf("Name > \n");
        gets(fname[i]);
        printf("Last Name > \n");
        gets(lname[i]);
        printf("MI > \n");
        scanf("%c",&mi[i]);
        printf("Prelim > \n");
        scanf("%d",&prelim[i]);
        printf("Midterm > \n");
        scanf("%d",&midterm[i]);
        printf("Finals > \n");
        scanf("%d",&finals[i]);
        temp = ((prelim[i] + midterm[i] + finals[i])*100)/300;
        avggrade[i] = temp;
        if(temp > 75)
        {
            //*remarks[i] = strdup("Pass");
            strcpy(remarks[i], "Pass");
        }
        else
        {
            strcpy(remarks[i], "Fail");
        }
        gets(s);
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
    printf("|Prilium");
    gotoxy(50,4);
    printf("|Midterm");
    gotoxy(60,4);
    printf("|Final");
    gotoxy(70,4);
    printf("|Avggrade");
    gotoxy(80,4);
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
        printf("|%d",prelim[i]);
        gotoxy(50, y);
        printf("|%d",midterm[i]);
        gotoxy(60, y);
        printf("|%d",finals[i]);
        gotoxy(70, y);
        printf("|%d",avggrade[i]);
        gotoxy(80, y);
        printf("|%s", remarks[i]);
        printf("\n");
        y++;
    }
}
