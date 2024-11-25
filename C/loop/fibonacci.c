// fibonacci numer
// 1 1 2 3 5 8 13 21 34 55 89.....
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int sum=1;
    int a=1;
    int b=0;
    for(int i=1; i<=n; i++)
    {
        
      sum=a+b;
      a=b;
      b=sum;
     printf("fibonacci number of %d is: %d\n",i,sum);

    }
    //printf("fibonacci number %d",sum);
    return 0; 
}     