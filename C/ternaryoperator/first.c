// ; is used to terninate the line
#include<stdio.h>
int main(){

    int n;
    printf("enter the number");
    scanf("%d" , &n);
    // ternary operator
    // exp1 ? exp2: exp3
    // exp2 --true 
    // exp3 --false
    n%2==0 ? printf("even number") : printf("odd number");
    return 0;
}
/*if (n%2==0)
   printf("even number");
   else
      printf("odd number");
      */