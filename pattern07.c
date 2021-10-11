#include <stdio.h>
int main()
{
    int i,j,n;
    printf("enter row : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=n; j>=i; j--)
        {
            if(i==1||j==i||i==n||j==n)
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
