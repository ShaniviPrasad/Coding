#include<stdio.h>
int main(){
    int l;
    printf("length of the rectangle");
    scanf("%d",&l);
    int b;
    printf("breadth of the rectangle");
    scanf("%d",&b);
    int a=l*b;
    int p=2*(l+b);
    if (a>p){
        printf("area of traingle is greater than its perimeter");

    }
    else {

        printf("area of traingle is not greater than perimeter of triangle");
        
    }
    return 0;


}    