#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    //4 7 10 13 161 19... upto n number of terms
    //we are going to use extra variable
    int a=1;
    for (int i=1; i<=n;i++)
    {
        printf("%d ",a);
        a=a+2;
    }
    return 0;
}
// 1 3 7 9.... upto n terms