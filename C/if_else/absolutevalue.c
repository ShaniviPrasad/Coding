// absolute value in which we put the mod so that it convert the negative value into positive
// -8 ko 8 
// 7 ko 7
#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n>=1)
    {
        printf("absolue value:%d",n);
    }
    else{
        n=-1*n;
        printf("absolute value: %d",n);
    }
    return 0;

}
/*
if(n<0){ //if n is negative
 n=n*(-1)
 }
 printf("the absolute value is :%d",n);
 */