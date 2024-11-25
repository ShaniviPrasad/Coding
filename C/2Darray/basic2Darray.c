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
    int n;
    printf("enter the no. of rows");
    scanf("%d", &n);
    int m;
    printf("enter the no. of columns");
    scanf("%d", &m);
    int arr[n][m];
    for (int i=0; i<n;i++)
{
    printf("enter the elements of rows :%d",i+1);
    //scanf("%d",&arr[i]);
    for (int j=0; j<m;j++){
        printf("enter the elements of colums :%d ", j+1);
   scanf("%d",&arr[i][j]);
    }
}
for (int i=0; i<n;i++){
    for (int j=0; j<m;j++){
    
    printf("%d ",arr[i] [j]);
    }
  printf("\n");
}

 return 0;
}