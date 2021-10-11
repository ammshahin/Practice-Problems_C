#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d",&a);
    while(a!=0 && a!=-)
    {
        n=a%10;
        if(n%2==0)
        {
            a=a/10;

        }
        else if(n%2==1)
        {
            printf("last Odd num: %d",n);
            break;
        }
    }
    if(a%2==0)
    {
        printf("no odd number found\n");
    }
    return 0;

}
