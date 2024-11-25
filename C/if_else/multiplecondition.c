/* && and || both are called/knows as logical operators */
#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n>5 && n<10)
    {
        printf("the number is between 5 and 10");

    }
    else{
        printf("the number is not between 5 and 10");

    }
    return 0;

}