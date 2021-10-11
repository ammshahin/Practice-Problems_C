#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main()

{
    int r;
    float area;
    printf("enter radius\n");
    scanf("%d",&r);
    area=PI*pow(r,2);

    printf("area of triamgle=%f",area);

    return 0;


}
