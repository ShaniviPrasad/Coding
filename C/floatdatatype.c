#include<stdio.h>
int main()
{
    float x=5;
    float y=2;
    float z=5/2;
    /*5/2 output 2.00 but 5.0/2 output 2.5 or 5/2.0 output 2.0 agar hmlog decimal value put krna par output bhi decimal  */
    printf("%f",z);
    return 0;
}



/*
float x=5;
float y=2;
printf("%f",5/2);
ska output invalid ayega

float x=5;
float y=2;
printf("%f",x/y);
*/