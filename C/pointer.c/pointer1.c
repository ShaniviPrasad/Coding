// %p is used to print the address of the variable
#include<stdio.h>
int main()
{
    int a=5;
    int*x=&a;// store address (pointer store)
    *x=7;// a is changed
    printf("%d",a);
    //printf("%d",*x);// iska mt variable k under ko bhi value store usko point kro and print krdo   
    //printf("%p",&b);
    return 0;
}