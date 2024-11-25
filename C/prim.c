#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
   int num=2;
 for(num=2; num<n; num++)
    {
        if(n%num==0 )
        {
            printf("number is not prime: %d \n", num);
        }
        else{
            //printf("number is prime: %d \n" , num);
            if (num==2)
            {
            
        printf("number is prime: %d \n" , num);
        }
        //printf("number is prime: %d \n" , num);
         num =num+1;
         
        
        }
     printf("number is  prime: %d \n" , num); 
    }
    
        
   //else 
   //{    
    
   //}
    return 0;
}  