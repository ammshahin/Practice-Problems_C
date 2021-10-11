#include <stdio.h>
int main()
{
    int i,j,n;
    printf("enter rows : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i==1 || j==1 || i==j || i==n || j==n)
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
