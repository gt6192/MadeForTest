#include<stdio.h>

int swap(int *a, int *b);

int main()
{
    int a, b, *c, *d;
    printf("Enter the value of a = ");
    scanf("%d", &a);
    printf("\nEnter the value of b = ");
    scanf("%d", &b);
    c = &a;
    d = &b;
    printf("\nBefore swap");
    printf("\nValue of a is = %d", *c);
    printf("\nValue of b is = %d", *d);
    swap(c, d);
    printf("\nAfter swap");
    printf("\nValue of a is = %d", *c);
    printf("\nValue of b is = %d", *d);
}

int swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}


