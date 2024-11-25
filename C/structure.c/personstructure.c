#include<stdio.h>
#include<string.h>
int main()
{
    struct person{
        char name[10];
        float salary;
        int age;

    }a ,b;
    strcpy(a.name,"abhinav");
    a.salary=1.2;
    a.age=32;
    printf("%s",a.name);
    printf("%d",a.age);
    printf("%f",a.salary);

    strcpy(b.name,"shruti");
    a.salary=9.6;
    a.age=30;
    printf("%s",a.name);
    printf("%d",a.age);
    printf("%f",a.salary);
return 0;
}