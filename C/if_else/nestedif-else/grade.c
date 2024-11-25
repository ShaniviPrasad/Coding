#include <stdio.h>
int main()
{
    int n;
    printf("enter the percentage of a student");
    scanf("%d", &n);
    if (n > 91 && n < 100)
        printf("excellent");
    if (n > 81 && n < 90)
        printf("very good");
    if (n > 71 && n < 80)
        printf("good");
    if (n > 61 && n < 70)
        printf("can do better");

    if (n > 51 && n < 60)
        printf("average");
    if (n > 41 && n < 50)
        printf("below average");
    if (n<40)

        printf("fail");
    return 0;
}