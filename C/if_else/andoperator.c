#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n>=1)
    {
    if(n%5==0 && n%3==0) // if(n%15==0)

    {
     printf("number is divisible by 5 and 3");

    }
    else{
    printf("number is not divisible by 5 and 3 ");


    }
    
    }
    else{
        printf("number is not positive integer");
    }
    return 0;

}