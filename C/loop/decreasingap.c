#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    // 100 97 94..... print the term till positive value
    int a=100;
    for(int i=1; i<=n,a>0;)
    //no n variable
    //for(int i=1; a>0; i++)
    {
        printf("%d\n", a);
        a=a-3;
        i=i+1;
        //if(a>0)
        //{
          //  printf("%d\n",a);

        //}
    }
    return 0;
}