#include<stdio.h>

int main()
{
    int arr[2][2]={{1,2},{3,4}};
    int ary[2][2]={{5,6},7,8};
    int add_both[2][2];
for ( int i=0; i<2;i++){
    for (int j=0; j<2;j++)
    {
        add_both[i][j]=arr[i][j]+ary[i][j];
    
    }
  }
  for ( int i=0; i<2;i++){
    for (int j=0; j<2;j++)
    {
        printf("%d ",add_both[i][j]);

    
    }
    printf("\n");
  }
  
  
 return 0;
}