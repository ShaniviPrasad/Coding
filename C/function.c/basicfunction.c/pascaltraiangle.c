#include<stdio.h>
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=0; i<=n;i++)
    {
        for(int k=0; k<=n-i; k++)
        {
           printf("  ");
        }
        int first=1;
        for(int j=0; i<=i;j++)
        {
            printf("%d",first);
            first=first*(i-j)/(j+1);
            
        }
        printf("\n");
    }
    return 0;
} 