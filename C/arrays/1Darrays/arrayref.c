#include<stdio.h>
void fun(int a[])
{
    a[0]=10;
    return 0;

}
int main()
{ 
    int arr[5]={1,2,3,4,5};
    printf("%d\n", arr[0]);
    fun(arr);
    printf("%d\n",arr[0]);



    return 0;
}
// in array function - it follow pass by reference
// like it in main function if we call the fun it will change the value according to the function value
// but not in (int,float, string) we use pointer 