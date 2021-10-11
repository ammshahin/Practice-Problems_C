#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1; i<2*n; i++)
    {
        for(j=1; j<2*n; j++)
        {
            if(i==n || j==n || i==j||2*n-i==j)
            {
                printf("+");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

