// function prototype is used when we put the call fuvction below the main function
// as we know code will not execute when call function is below the main function
#include<stdio.h>
int main()
{  
    void fun();
    fun();
    return 0;
}
void fun(){
    printf("hello");
}