#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    //1-2+3-4+5-6+....n term
    //odd number -add
    // even number - substract
    int sum=0;
    for (int i=1; i<=n;i++){
    if(i%2!=0) 
     sum=sum+i;
     else 
     sum= sum-i;

    }
    printf("the sum is: %d",sum);
    return 0;
    


}