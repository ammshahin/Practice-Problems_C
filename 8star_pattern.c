#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1; i<2*n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if((i==1&&(j==n || j==i)) ||
                (i==n&&(j==n || j==1))||
                    (i==2*n-1&&(j==n || j==1)))
            {
                printf(" ");
            }
            else if(i==1 || j==1||i==n||i==(n*2)-1||j==n)
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
