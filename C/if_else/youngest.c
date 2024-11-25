#include<stdio.h>
main(){
    int a;
    printf("enter the age of ram");
    scanf("%d",&a);
    int b;
    printf("enter the age of shyam");
    scanf("%d",&b);
    int c;
    printf("enter the age of the ajay");
    scanf("%d",&c);
    if( a<b && a<c)
    {
        printf("ram is youngest one");

    }
    if(b<a && b<c)
    {
        printf("shyam is the youngest one");

    }
    if(c<a && c<b)
    {
        printf("ajay is the youngest one");

    }
    return 0;
    
}