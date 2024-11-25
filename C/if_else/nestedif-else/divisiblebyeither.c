/*if-else ke andar if*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    if (n % 5 == 0)
    {
        if (n % 3 == 0)
        {
            printf("number is either divisible by 3 or 5");
        }
        else
        {
            printf("number is not either divisible by 3 or 5");
        }
    }
    else
        {
            printf("number is not divisible by 5");
        }
    
    return 0;
}