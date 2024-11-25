/* three digit number are thought greater than 99 and less than 999*/
#include<stdio.h>
int main(){

    int n;
    printf(" enter the number");
    scanf("%d",&n);
    if(n>99 && n<=999)
    {
        printf("number is a three digit number");

    }
    else{
        printf("number is not a three digit number");

    }
    return 0;
}
/* for && logical operator both the condition should be satify*/                           