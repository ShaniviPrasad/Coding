#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if (n>=1)
    {
        if(n%3==0 || n%5==0)
        {
            printf("number is divisible by either one");

        }
        else 
        {
            printf("number is not divisible by either");
        }
    }
    else
    {
        printf("number is not positive");
    }
    return 0;
}   