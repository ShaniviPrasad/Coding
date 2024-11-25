#include<stdio.h>
int main(){
    int a;
    printf("enter the 1st side of the triangle");
    scanf("%d",&a);
    int b;
    printf("enter the 2nd side of the triangle");
    scanf("%d",&b);
    int c;
    printf("enter the 3rd side of the triangle");
    scanf("%d",&c);
    if ((a+b)>c && (b+c)>a && (c+a)>b)
    {
        printf("triangle");

    }
    else{
        printf("not a triangle");

    }
    return 0;


} 
