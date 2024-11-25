#include<stdio.h>

int main()
{
    //int arr[2][2]={{1,2},{3,4}};
    //arr[0][0]=1;
    ///arr[0][1]=2;
    //arr[1][0]=3;
    //arr[1][0]=4;
    // 1 2
    // 3 4
    int n =4;
    //printf("enter the no. of students");
    //scanf("%d", &n);
    //int roll_number;
    int m=2;
    //printf("enter the no. of roll number & marks");
    //scanf("%d", m);
    //printf("enter the no. of columns");
    //scanf("%d", &marks);
    int arr[n][m];
    for (int i=0; i<n;i++)
   {
    printf("enter number of students :%d",i+1);
    //scanf("%d",&arr[i]);
    for (int j=0; j<m;j++){
        printf("enter the students roll number/ marks :%d ", j+1);
   scanf("%d",&arr[i][j]);
    //printf("enter the students marks :%d ", j+1);
    }
}
for (int i=0; i<n;i++){
    for (int j=0; j<m;j++){
    
    printf("%d ",arr[i][j]);
    }
  printf("\n");
}

 return 0;
}
