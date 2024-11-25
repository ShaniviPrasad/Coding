#include<stdio.h>
int main()
{
    int n;
    printf("enter no of rows");
    scanf("%d",&n);
    for(int i=1; i<=n;i++)
    {

        for(int j=1;j<=n+3;j++)
        {
          if(i+j<=n || i+j>n+4 )
         {
             printf("#");
           
          } 
          else
          //for(int k=1;k<=i;k++)
          {
            printf("*");
          }
        }
    
        printf("\n");
    }
    
    return 0;
}    