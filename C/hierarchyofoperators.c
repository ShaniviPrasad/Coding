// this operation is same as the BODMAS rule in which the first operation is * second is / third is + fourth is -
#include<stdio.h>
int main(){
   int i=2, j=3, k,l;
   float a,b;
   k=i/j*i;
   l=j/i*i;
   a=i/j*i;
   b=j/i*i;
   printf("%d %d %f %f",k,l,a,b);/*float ki value 6 decimal place tak ati ha*/
   // int i=2*3/4 + 4/4 + 8- 2 + 5/8;
    //printf("%d",i);
    return 0;

}
// computer usually calculate the equation from left to right
