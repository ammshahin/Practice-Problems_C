#include<stdio.h>
int main()
{
    int i,n=1;
    for(i=1;i<20;i+=2,n++)
    {
        if(n%5==0)
        {
            printf("h20\n");
            n*=2;
            continue;
        }
        if(n%9==0)
        {
            printf("Water\n");
            break;
        }
        else
        {
            n+=2;
            printf("Resturant\n");
        }

    }
    return 0;
}
