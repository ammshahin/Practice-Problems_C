#include<stdio.h>
int main()
{
    int c[6]= {1,2,3,4,5,56},i,f[6];

    for(i=0; i<6; i++)
    {
        f[i]=9.0/5*c[i]+32;
        printf("%d\n",c[i]);
    }

    for(i=0; i<6; i++)
    {

        printf("f=9.0/5*%d+32=%d\n",c[i],f[i]);
    }

}
