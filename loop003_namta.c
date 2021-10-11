#include <stdio.h>
int main()
{
    /*int n=10,x=1;
    while(x<=10)
    {
        printf("%d*%d=%d\n",n,x,n*x);
        x=x+1;
    }*/
    int n=10,x;
    for(x=1;x<=10;x=x+1)
    {
        printf("%d multiplies %d = %d\n",n,x,n*x);
    }
    return 0;
}
