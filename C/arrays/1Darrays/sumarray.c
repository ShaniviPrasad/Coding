#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
     int arr[n];
     int sum=0;
     for(int i=0; i<n ;i++)
     {
        printf("enter the element of array%d\n",i+1);
        scanf("%d",&arr[i]);
        printf("%d ",arr[i]);
        sum=sum+arr[i];
        printf("sum of array elements%d\n",sum);
     }
    
    
    return 0;

}
// in calculating the product of the array elements we will not insalize the loop with 0