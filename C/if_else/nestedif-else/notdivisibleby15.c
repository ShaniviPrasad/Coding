#include <stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("positive integer \n");
    
        if (n % 3 == 0 || n % 5 == 0)
        {
           if (n % 15 != 0)
           {
             printf("the number is either divisible by 5 or 3 by not divisible by 15");
           }
           else
           {
            printf("divisible by 15");
           }
        }
        else
        {
          printf("not divisible by either 5 or 3");
        }
    }
    else
    {
        printf("not a positive integer");
    }
    return 0; 
}
//if (n%3==0 || n%5==0 && n%15!=0)
/*this will be wrong because  && is give more prefernece than || in hierarcy 
to correct it we need to write it in this way*/
// if((n%3==0 || n%5==0) && n%15!=0)
