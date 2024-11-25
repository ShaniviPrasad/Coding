#include<stdio.h>
int main()
{
    int a;
    printf("enter the 1st number");
    scanf("%d",&a);
    int b;
    printf("enter the 2nd number");
    scanf("%d",&b);
    int c;
    printf("enter the 3rd number");
    scanf("%d",&c);
    if (a>b)// b is not greatest
    {
        if(a>c)
            printf(" %d is greatest",a);
        else
            printf("%d greatest",c);

    }
    else {// b>a -- a ab sasbse bada ni h
        
        if(b>c)
           printf("%d is greatest",b);
        else 
           printf("%d greatest",c);
    }

    return 0; 
} 