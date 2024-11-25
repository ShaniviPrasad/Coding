#include<stdio.h>
int main()
{
    int n;
    printf("enter no. of rows");
    scanf("%d",&n);
    for(int i=65; i<=n;i++)
    {
           
        for(int j=65; j<=n;j++)
        {
            char ch= (char)j;// typecasting change one datatype into another datatype....
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}