#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1; i<2*n; i++)
    {
        for(j=1; j<=n; j++);
        {
            /*if((i==1&&(j==n || j==1)) ||
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
            }*/
            printf("*");
        }
        printf("\n");
    }
}

/*#include <stdio.h>

int main()
{
    int i, j, size;

    printf("Enter size: ");
    scanf("%d", &size);

    for(i=1; i<size*2; i++)
    {
        for(j=1; j<=size; j++)
        {
            // Condition for corner and center intersection space
            if((i==1 && (j==1 || j==size)) ||
               (i==size && (j==1 || j==size)) ||
               (i==size*2-1 && (j==1 || j==size)))
            {
                printf(" ");
            }
            else if(i==1 || i==size || i==(size*2)-1 || j==1 || j==size)
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

    return 0;
}
*/
