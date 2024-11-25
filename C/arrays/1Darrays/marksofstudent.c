#include<stdio.h>
int main()
{
    int n;
    printf("enter no. of students");
    scanf("%d",&n);

    int marks_arr[n];
    for (int i=0;i<n;i++)
    {
        printf("enter the student marks%d\n",i+1);
        scanf("%d",&marks_arr[i]);
       // printf("%d",marks_arr[i]);
    
    //int roll_number[n];
    //for (int i=0;i<n;i++)
    //{
       // scanf("%d",&roll_number[i]);
    

    if(marks_arr[i]<35)
    {
     printf("roll number of student as %d", i);
    }
    }
    
    return 0;
} 