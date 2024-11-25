#include <stdio.h>
int main()
{
    int sp;
    printf("enter the selling price");
    scanf("%d", &sp);
    int cp;
    printf("enter the cost price");
    scanf("%d", &cp);
    if (sp > cp)
    {
      printf("profit");
    }
    else if (cp > sp)
    {
        printf("loss");
    }
    else
    {
        printf("no profit no loss");
    }
    return 0;
}