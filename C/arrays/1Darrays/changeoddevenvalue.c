#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of the element:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++)
    {
        printf("enter the elements of the array%d\n",i+1);
        scanf("%d",&arr[i]);
        //printf("%d",arr[i]);
        if(i%2!=0 || i==0)
        {
            arr[i]=arr[i]*2;
           printf("%d \n",arr[i]) ;

        }
        else{
            arr[i]=arr[i]+10;
            printf("%d\n",arr[i]) ;
        }
    }
    for(int i=0; i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
return 0;
}