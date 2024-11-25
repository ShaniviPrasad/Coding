#include<stdio.h>
int main(){
    float p,r,t,si;
    printf("enter the p:");
    scanf("%f",&p);// &p denote the address of p  
    printf("enter the r:");
    scanf("%f",&r);
    printf("enter the t:");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("simple interest: %f",si);
    return 0;
}