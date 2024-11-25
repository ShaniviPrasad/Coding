/* 
  pattern print
  ******
  *    *
  *    *
  ******
  hollow rectangle
  */
 #include<stdio.h>
int main()
{
    int n;
    printf("enter no. rows");
    scanf("%d",&n);
    for(int i=1; i<=n;i++)
    {
        for(int j=1;j<=n+2; j++)
        {   
            //int a=n/2+1;
            if(j==1 || j==n+2 ||i==1 || i==n)
            {
                printf("*");

            }
            else
            {
                printf(" ");
            }
        }
        
            printf("\n");

    }
    return 0;
}