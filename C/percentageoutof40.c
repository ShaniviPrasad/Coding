#include<stdio.h>
int main(){
    float x=39;// maths marks out of 40
    float y=37;// english marks 
    float z=38;// chemistry marks
    float v=36;// physics marks
    float percentage =(x+y+z+v)/4*100/40; // pecentage of 4 subject out of 40 each..
    printf("percentage of 4 subjects out of 40: %f",percentage);

    return 0;
}