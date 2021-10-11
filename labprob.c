#include <stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=n;
        for(j=1;j<=i;j++)
        {
           printf("%d",k--);
        }

        printf("\n");
    }
    for(i=1;i<n;i++)
    {
        k=n;
        for(j=i;j<n;j++)
        {
            printf("%d",k--);
        }
        printf("\n");
    }
}
