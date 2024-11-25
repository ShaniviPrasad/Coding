#include<stdio.h>
int main()
{
    //printf("*****\n*****\n*****");
    int n;
    printf("enter the no of rows");
    scanf("%d",&n);
    //int m;
    //printf("enter the no of columns");
   //scanf("%d",&m);
    for(int i=1; i<=n;i++)// outer loop signify rows
    {
         for(int j=1;j<=n;j++)// inner loop no of columns , no of stars in each line
         {
            printf("%d",j);

         }
         printf("\n");// har line ka baad enter marna ke liye h
    }
    return 0;
}