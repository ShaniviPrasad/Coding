#include<stdio.h>
void england()
{
    printf("you are in england\n");//6
    return;// 7
}
void australia()
{
    printf("you are in Australia\n");// 4
    enland();// calling england //5
    return;//8

}
void india()
{
    printf("you are in India\n");// 2
    australia();// calling australia //3
    return;//9

}
int main()
{
    india();// calling india //1
    return 0;//10
}
// call function hamesh upper hona chahiya main function