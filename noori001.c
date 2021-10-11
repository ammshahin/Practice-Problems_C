#include <stdio.h>
int main()
{
    int i,a,b,t;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        t=a;
        a=b;
        b=t;
    }
    for(i=a;i<=b;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}

