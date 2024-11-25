//AP -1,3,5,9,.....n terms
#include<stdio.h>
int main()
{
    int n;
    printf("emter the number");
    scanf("%d",&n);
    for (int i=1;i<=2*n-1;)
    {
        printf("%d,",i);
        i=i+2;

    }
    return 0;

}
/*nth term of ap= 2n-1
a,a+d,a+2d,a+3d,...... a+(2n-1)d
 a- first term
 d - common difference
 an = 1+(n-1*2
     = 2n-1*/