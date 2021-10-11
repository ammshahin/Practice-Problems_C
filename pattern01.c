#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n-2;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || i==n-2 || j==1 || j==n)
            {
               printf("* ");
            }
            else
            {
                printf("  ");
            }

        }
        printf("\n");
    }
}
