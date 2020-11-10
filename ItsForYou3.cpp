#include<stdio.h>
#include<string.h>

int main()
{
    char str[50], temp[50];
    int i, j, k, len, len2, b = 0, temp2 = 0;

    printf("Enter the string = ");
    gets(str);
    printf("\nyour entered string is = ");
    puts(str);

    len = strlen(str);
    for(i=0;i<len;i++)
    {
        len2 = strlen(temp);
        for(k=0;k<len2;k++)
        {
            if(str[i] == temp[k])
            {
                temp2 = 1;
            }
        }
        for(j=0;j<=len;j++)
        {
            if(temp2 != 1)
            {
                if(str[i] == str[j])
                {
                    b++;
                    temp[j] = str[i];
                }
            }
        }
        if(temp2 != 1)
        {
            printf("\n%c > %d", str[i], b);
            b = 0;
            temp2 = 0;
        }
        else{
            temp2 = 0;
        }
    }
}
