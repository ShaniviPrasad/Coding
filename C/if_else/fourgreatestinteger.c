#include<stdio.h>
int main(){
    int a;
    printf("enter the first number");
    scanf("%d",&a);
    int b;
    printf("enter the 2nd number");
    scanf("%d",&b);
    int c;
    printf("enter the 3rd number");
    scanf("%d",&c);
    int d;
    printf("enter the 4th number");
    scanf("%d",&d);
    if(a>b && a>c && a>d)
    {
        printf("%d is greatest",a);

    }
    if(b>a && b>c && b>d)
    {
        printf("%d is greatest",b);
        
    }
    if(c>b && c>a && c>d)
    {
        printf("%d is greatest",c);
        
    }
    if(d>b && d>c && d>a)
    {
        printf("%d is greatest",d);
        
    }
    return 0;
}
