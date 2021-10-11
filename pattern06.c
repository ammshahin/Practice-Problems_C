#include <stdio.h>
int main()
{
    int i,j,n;
    printf("enter rows : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=n-1; j>=i; j--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            if(i==1||j==1||i==n||i==j)
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
