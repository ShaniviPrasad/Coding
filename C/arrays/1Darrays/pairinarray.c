#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of the element:");
    scanf("%d",&n);
    int arr[n];
    int x=10;
        int count=0;
        int sum =0;
        for(int i=0; i<n;i++)
    {
        printf("enter the elements of the array  %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n;i++)
    {
        for( int j=i+1; j<n;j++)
        {
            
            int sum=arr[i]+arr[j];

        if(sum==x)
        {
         count++;
        // printf("(%d,%d)\n",arr[i],arr[j]);
        }
    }
    }
    printf("no. of pairs%d",count);

        

return 0;
}  
  