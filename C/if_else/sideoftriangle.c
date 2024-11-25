/* for the traingle 
sum of two side should be greater than the third side */
#include<stdio.h>
int main(){
    int a;
    printf("enter the 1st number");
    scanf("%d",&a);
    int b;
    printf("enter the 2nd number");
    scanf("%d",&b);

    int c;
    printf("enter the 3rd number");
    scanf("%d",&c);
    if(a+b>c && b+c>a && c+a>b)
    {
        printf("sides of the traingle");

    }
    else{
        printf("not the side of the traigle");

    }
    return 0;


}