#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter Num of Rows:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            printf("*");
        }
        for(j=3;j<=2*i;j++)
        {
            printf(" ");
        }
        for(j=0;j<=n-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=1;j<=2*n-2*i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
