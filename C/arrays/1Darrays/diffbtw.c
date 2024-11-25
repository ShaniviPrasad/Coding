#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of the element:");
    scanf("%d",&n);
    int arr[n];
    int sum_odd=0;
        int sum_even=0;
        int diff=0;
    for(int i=0; i<n;i++)
    {
        printf("enter the elements of the array  %d\n",i+1);
        scanf("%d",&arr[i]);
        //printf("%d",arr[i]);
        

        if(i%2!=0 || i==0)
        {
            sum_odd=sum_odd+arr[i];
           printf("%d \n",sum_odd) ;

        }
        else{
            sum_even=arr[i]+sum_even;
            printf("%d\n",sum_even) ;
        }
         diff=sum_even-sum_odd;
        
    }
    printf("difference btween both sum%d",diff);
    
    //for(int i=0; i<n;i++)
    //{
      //  printf("%d  ",arr[i]);
    //}
return 0;
}