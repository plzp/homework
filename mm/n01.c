#include <stdio.h>
double average(double a, double b)
{
    return (a + b) / 2;
}
int main(void)
{
    double x, y;
    printf("please enter x,y:\n");
    scanf("%1f%1f", &x, &y);

    printf("average is %f\n", average(x, y));
    return 0;
}