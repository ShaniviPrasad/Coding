#include<stdio.h>
int main()
{
    int n;
    printf("emter the  number");
    scanf("%d ", &n);
    for (int i=4; i<=3*n+1;)
    {
        printf("%d,",i);
        i=i+3;

    }
    return 0;


}