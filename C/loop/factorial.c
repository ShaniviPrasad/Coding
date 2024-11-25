//n!- n factorial
//0!=1
//5!=5*4*3*3*2*1
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int factorial=1;
    //int j=1;
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
        printf("factoraial of the number %d is:%d\n",i,factorial);

                     
         }
         return 0;

    }
    //printf("factoraial of the number :%d",factorial);
    
