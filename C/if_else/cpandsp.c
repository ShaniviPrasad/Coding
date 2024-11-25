#include<stdio.h>
int main(){
    int x;
    printf("enter the cost price of the item");
    scanf("%d",&x);
    int y;
    printf("enter the selling price of the item");
    scanf("%d",&y);
    if(y>x)
    {
        int a=y-x;
        printf("profit : %d",a);

    }
    if(x>y)
    {
        int b=x-y;
        printf("loss: %d",b);

    }
    if(x==y)
    {
        printf("no profit no loss");
    }
    return 0;
    
}