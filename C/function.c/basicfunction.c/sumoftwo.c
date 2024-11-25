#include<stdio.h>
int add(int a,int b)// ( arguments )
{
    return a+b;
}
int main()
{
    int a;
    printf("enter first no.");
    scanf("%d",&a);
    int b;
    printf("enter second no.");
    scanf("%d",&b);
    int sum=add(a,b);
    printf("%d",sum);
    
return 0;
}
// inbuilt function is also known as library function