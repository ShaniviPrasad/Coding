#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d" ,&n);
    // gp - 100,50,25.... n term
    float a=100;
    for (int i=1; i<=n; i++)
    {
        printf("%f ",a);
        a=a/2;

    }
    return 0;
} 