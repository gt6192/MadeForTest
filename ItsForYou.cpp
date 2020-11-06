#include<stdio.h>

int main()
{
    int len;
    printf("Enter the length of array = ");
    scanf("%d",&len);

    int a[len];
    printf("Enter the %d elements = \n", len);
    int i;
    for(i=0;i<len;i++)
    {
        printf("> ");
        scanf("%d", &a[i]);
    }

    int shortest;
    shortest = a[0];
    for(i=0;i<len;i++)
    {
        if(a[i] < shortest)
        {
            shortest = a[i];
        }
    }

    printf("Shortest number is = %d", shortest);
    int j;
    for(i=0;i<len;i++)
    {
        if(a[i] == shortest)
        {
            for(j=i;j<len;j++)
            {
                if(a[j+1] == NULL)
                {
                    a[j] = a[j-1];
                    break;
                }
                else{
                    a[j] = a[j+1];
                }
            }
        }
    }
    a[len-1] = a[len-2];
    printf("\nElements of array are = ");
    for(i=0;i<len;i++)
    {
        printf(" %d", a[i]);
    }
    printf("\n\nAre we friends now?\nWhatsapp = +919370981456\n\n");
}
