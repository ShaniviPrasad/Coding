#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
   int num=2;
 if(num<n)
 {
    if(n%num==0)
    {
        printf("not a prime number: %d",n);

        

    }
    else{
       num=num+1; 
    }

 }
 else{
    printf("number is greater then the input: %d",num);
 }
 printf(" a prime number: %d",n);
 }  
