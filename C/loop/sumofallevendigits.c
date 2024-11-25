#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    int sum=0;
    int evendigit=0;
    while (n!=0)
    {
        evendigit =n%10;
       // sum=sum+evendigit;
        n=n/10;
        if(evendigit%2==0)
        {
            sum=sum+evendigit;
            printf("sum of even digit %d", sum);

        }

    }
    return 0;
}
