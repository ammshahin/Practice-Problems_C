#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=n; j>i; j--)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)
        {
            if(i==1||j==1||j==(2*i-1)||i==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
         printf("\n");
    }
}
