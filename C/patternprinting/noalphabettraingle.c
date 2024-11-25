#include<stdio.h>
int main()
{
    int n;
    printf("enter no. of rows");
    scanf("%d",&n);
    if(n%2!=0)
    {
      for(int i=1; i<=n;i++)
          {
            int a=1;
              for(int j=1; j<=i;j++)
              {

                int d=a+64;
                 char ch= (char)d;// typecasting change one datatype into another datatype....
                 printf("%c", ch);
                 a++;
        
                
             }
             printf("\n");
          }
      }
else
    {
for(int i=1; i<=n;i++)
          {
            //int a=1;
              for(int j=1; j<=i;j++)
              {

                //int d=a+64;
                 //char ch= (char)d;// typecasting change one datatype into another datatype....
                 printf("%d", j);
              }
              printf("\n");
          }
    }


    return 0;
} 