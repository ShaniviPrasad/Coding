#include<stdio.h>
void swap(int*x,int* y)
{
    int temp;
     temp=*x;//tem=2
    *x=*y;//*x=9, a=9
    *y=temp;// *y=2 , b=2
    return ;

}
int main()
{
    
    int a=2;
    //printf("enter first no:");
    //scanf("%d",&n);
    int b=9;
    //int*x=&a;
   // int*y=&b;
    //printf("enter second no.");
    //scanf("%d",&m);
    swap(&a,&b);
    printf("print a:%d\n",a);
    printf("print b: %d",b);
     return 0;
}
// int* - int ka adress store krt h 
// int**- int* ka address store krta h
//%p - address print hota h
//&n, &a- address deta h inko
//*x- usko jao or uski value utha k lao   