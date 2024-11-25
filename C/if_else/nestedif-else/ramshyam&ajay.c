#include <stdio.h>
int main()
{
    int r;
    printf("enter the age of ram");
    scanf("%d", &r);
    int s;
    printf("enter the age of shyam");
    scanf("%d", &s);
    int a;
    printf("enter the age of ajay");
    scanf("%d", &a);
    if (r>s)
    {
        if (r>a)
            printf("%d is greatest", r);
        else
            printf("%d is greatest", a);
    }
    else
    {
        if (s>a)
            printf("%d greatest", s);
        else
            printf("%d greatest", a);
    }

    return 0;
}
