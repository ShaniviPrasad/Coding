#include<stdio.h>
int main()
{
    int x ,y;
    printf("enter the coordinates");
    scanf("%d %d", &x ,&y);
    if(x==0 && y!=0)
    {
    printf("the coordinate lies on y axis");
    }
    else if (x!=0 && y==0)
    {
        printf("the coordinate lies on x axis");
    }
    else if(x==0 && y==0)

    {
        printf("the coordinate lies on origin");

    }
    else {
        printf("the coordinate does not lies om x or y axis ");
        
    }
    return 0;

} 