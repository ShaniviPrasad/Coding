#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    for(int i=1;i<=10;)
    {
       int j=n*i;
       printf("%d\n",j);
       i=i+1;
    }
    return 0;
}
//for(i=19; i<=190; i=i+19)
// printf("%d\n",i);