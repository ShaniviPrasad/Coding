#include<stdio.h>
void greet()// function name as the name of main function
{// external function
    printf("Good Morning\n");
    printf("How are you ?\n");
    return;// function khatam
}
int main()// first code see main function
{
    greet();// call function 
    greet();// loop k under bhi la sakta h for & while loop                 
    greet();// function ka under bhi dal sakta h if -else

    return 0;
}
// code always starts from main() main function
//return; katam hota ha function