#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    // 3 12 48..... n term
    int a=3;
    for (int i=1; i<=n;i++)
    {
        printf("%d ",a);
        a=a*4;

    }
    return 0;
    
}