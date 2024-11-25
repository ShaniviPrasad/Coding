#include<stdio.h>
int main(){
    int a,b;// a>b;
    printf("enter dividend");
    scanf("%d",&a);
    printf("divisor");
    scanf("%d",&b);
   // int q=a/b;
    //int r;
    //r=a-(b*q);// divisor *quotient+ remainder= dividend
    //printf("the remainder when %d is divided by %d is: %d",a,b,r);
    int r=a % b;
    printf("the remainder when %d is divided by %d is: %d",a,b,r);
    return 0;
}
/*diviser*quotient+remainder= dividend
remainder=dividend-divisor*quotient
r=a-b*q;
a=39;
b=7
int q=a/b;
q=5*/              



/* operators
+
-
/
*
modulus operator
(%) this operator is used to find the remainder
*/