#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of the arry element:");
    scanf("%d",&n);
    int arr[n];
    int max=arr[0];

    for(int i=0; i<n; i++)
    {
      printf("enter the element%d \n",i+1);
      scanf("%d",&arr[i]);
      if(max<arr[i])
      {
        max=arr[i];
      }
    }
    
    printf("%d",max);

 return 0;
}