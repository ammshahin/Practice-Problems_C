#include<stdio.h>
int main()
{
    int n,reverse;
    scanf("%d",&n);

    while(n!=0)
    {
        reverse=n%10;
        printf("%d",reverse);
        n=n/10;
    }

}
