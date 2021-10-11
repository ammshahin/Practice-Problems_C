#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main()
{
    double r, area;
    //printf("Enter value of R:");
    scanf("%lf",&r);
    area=2*PI*(r*r);
    //printf("%lf(2*%lf)=%.2lf",PI,r,r,area);
    printf("Area is=%.3lf",area);
    return 0;
}
