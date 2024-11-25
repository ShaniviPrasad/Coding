#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int reverse=0;
    int ld;
    while(n!=0){
        ld=n%10;
        //ld=ld*10;
         reverse=reverse*10;

        reverse=reverse+ld;
        //reverse=reverse*10;

        n=n/10;


    }
    printf("reverse of the number:%d",reverse);
    return 0;
}                           