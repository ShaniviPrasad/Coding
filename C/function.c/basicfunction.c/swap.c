#include<stdio.h>
int main()
{
    
    int n;
    printf("enter first no:");
    scanf("%d",&n);
    int m;
    printf("enter second no.");
    scanf("%d",&m);
    int a=0;
    a=n;
    n=m;
    m=a;
    printf("print n:%d",n);
    printf("print m: %d",m);
     return 0;
}
/* swap 2 number without using 3rd variable
 #include<stdio.h>
int main()
{
    
    int n;
    printf("enter first no:");
    scanf("%d",&n);
    int m;
    printf("enter second no.");
    scanf("%d",&m);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("print n:%d",n);
    printf("print m: %d",m);
     return 0;







*/