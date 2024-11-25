#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int fact=1;
    int i=1;
    for(i=1;i<=n;i++)
      {
        fact=fact*i;
        
        
      }
      printf("factorial= %d ",fact);
      
      return 0;
}