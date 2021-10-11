#include <stdio.h>
int main()
{
    float arr[10],sum=0;
    int i;
    float avg;
    for(i=0;i<5;i++)
    {
        scanf("%f",&arr[i]);
        if(arr[i]<0)
        {
            printf("negative : %f\n",arr[i]);
        }

        sum=sum+arr[i];
    }
    printf("sum = %f\n",sum);
    avg=sum/5;
    printf("Avarage: %f\n",avg);
    printf("%f\n",arr[3]);

}
