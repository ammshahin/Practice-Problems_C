#include<stdio.h>
int main()
{
    int j,f,count=0,e;
    for( j=9,f=1; j<=100 ; j=j+9,f++)
    {
        if(f<=10)
        {
            count++;
        }
        else
        {
            f=f-1;

        }
e=100-(f*9);

    }
    printf("%d\n",count);
    printf("%d\n",f);
    printf("%d\n",e);



}
