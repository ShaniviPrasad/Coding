#include<stdio.h>
#include<string.h>
int main()
{
    struct book{
        char name[50];// name of book contain how much letter
        float price;
        int number_pages;

    }a,b,c;
    strcpy(a.name,"secrete seven");
    a.number_pages=100;
    a.price=410.0;
    printf("%d\n",a.number_pages);
    printf("%f\n",a.price);
    printf("%s",a.name);
    return 0;

}// for printer the string we need to strcpy(a.name,"screte seven");