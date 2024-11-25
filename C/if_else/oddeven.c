//control statement is also called condition statement
#include<stdio.h>
int main(){
    int n;// dabbe ban gaye
    printf("enter the number:"); // ak number put kro
    scanf("%d",&n);  //dabbe ma value daal di 

    if(n%2==0) // if block  (remainder)
    {
    printf("even number");
    }
    else                       /*if(n%2!=0)
                                 {
                                    printf("odd number");
                                 }*/
    {                             
        printf("odd number");
    }
    return 0;
}