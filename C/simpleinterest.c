#include<stdio.h>
int main(){
    /*reason for taking all the variables in the float datatype is because the rate and time can be of decimal value */
    float p=100;
    float r=7;
    float t=3;
    float si=(p*r*t)/100;
    printf("simple interest:%f",si);
    return 0;
}



/*
float p,r,t,si;// 4 dabbe crete ho jaate ha or isse code acha dekta ha
    p=100;
    r=7;
    t=3;
    si=(p*r*t)/100;
    printf("simple interest:%f",si);
*/