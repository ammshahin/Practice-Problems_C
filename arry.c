#include<stdio.h>
int main()
{
    int a[100],i,n,sum=0;
    printf("Enter a Number\n");
    scanf("%d",&n);
    printf("Enter other Number\n");
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
     sum=sum+a[i];
    }
    printf("sum=%d",sum);
}
