#include <stdio.h>
int main()
{
    int n;
    printf("enter the percenatge");
    scanf("%d", &n);
    // more tan 80 - A
    // more than 60 - B
    // more than 40 - C
    // less than 40 -D

    if (n > 80)
    {
        printf(" A grade");
    }
    else if (n > 60)
    {
        printf("B grade");
    }
    else if (n > 40)
    {
        printf(" C grade");
    }
    else
    {
        printf("D grade");
    }
    return 0;
}