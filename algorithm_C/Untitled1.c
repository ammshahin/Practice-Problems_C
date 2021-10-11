#include<stdio.h>

int main()
{
    int t,n,k,e=0,count = 0,f,g,i,j,test[100];
    int a[10000];
    scanf("%d",&t);

    for(g=0; g<t; g++)
    { count=0;
        scanf("%d%d",&n,&k);
        for( i= 0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for( i= 0; i<n; i++)
        {

            a[i] = a[i]+ e;
            if(a[i]>=k)
            {
                e = 0;
                for( j=9,f=1; j<=a[i] ; j=j+9,f++)
                {
                    if(f<11)
                    {
                        count++;
                    }
                    else
                    {
                        f=f-1;
                    }
                    e = a[i]-(f*k);

                }


            }
            else
            {
                e = a[i];
            }

        }
      test[g]=count;
    }
    for(g=0;g<t;g++)
    {
     printf("Case %d: %d\n",g+1,test[g]) ;
    }


}
