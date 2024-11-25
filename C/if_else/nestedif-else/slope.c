#include<stdio.h>
int main()
{
    double x1;
    printf("enter 1st point x axis value");
    scanf("%d", &x1);
    double y1;
    printf("enter 1st point y axis value");
    scanf("%d", &y1);
    double x2;
    printf("enter 2nd point x axis value");
    scanf("%d", &x2);
    double y2;
    printf("enter 2nd point y axis value");
    scanf("%d", &y2);
    double x3;
    printf("enter 3rd point x axis value");
    scanf("%d", &x3);
    double y3;
    printf("enter 3rd point y axis value");
    scanf("%d", &y3);
    double m1= (y2-y1)/(x2-x1);
    double m2= (y3-y2)/(x3-x2);
    if (m1==m2)
    printf("point fall on one straight line");
    else
    printf("point do not line on one straight line");

    return 0;

}