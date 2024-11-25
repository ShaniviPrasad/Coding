//wap to count digits of a  given number
//n=19325
//hint
// 1) / operatot
// 2) 19325/10 =1932
// while loop because we dont know many thinks 
// int count=0;
//n=n/10;
//count++;
//condition - n=0


#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int  count =0;
    while (n!=0)
    {
        n=n/10;
        count++;
    }
    printf("the no of digits are %d",count);
    return 0;

}