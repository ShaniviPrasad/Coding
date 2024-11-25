#include <stdio.h>
int main()
{
    int a;
    printf("enter the first number");
    scanf("%d", &a);
    int b;
    printf("enter the second numbetr");
    scanf("%d", &b);
    int c;
    printf("enter the third number");
    scanf("%d", &c);
    if (a>b && a>c)
    {
        printf(" is greatest number:%d", a);
    }
    if (b>a && b>c)

    {
        printf(" greatest number:%d", b);
    }
    if (c>a && c>b)
    {
        printf(" greatest number:%d", c);
    }
    return 0;
}