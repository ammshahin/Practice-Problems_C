#include<stdio.h>
int main()
{
    float total,BDT;
    int n,b,c,g;
    printf("number of student");
    scanf("%d",&n);
    printf("price of berger");
    scanf("%d",&b);
    printf("price of candy");
    scanf("%d",&c);
    printf("price of coke");
    scanf("%d",&g);
    total=n*(b+c+g);
    if(total>=5000)
    {
        BDT=total-total*(5.0/100.0);
    }
    else if(total>=10000)
    {
        BDT=total-total*(10.0/100.0);
    }
    printf("BDT %f\n",BDT);
     printf("total %f\n",total);
    return 0;
}
