#include<stdio.h>
#include<math.h>
int cross(int a)
{
    return 2*a;
}
int square(int b)
{
    return pow(b,2);
}
int mul(int a,int c)
{
    return 4*a*c;
}
int root(int a,int b,int c)
{
       return sqrt(square(b)-mul(a,c));
}
int result(int a,int b,int c)
{
    return ((-b)+root(a,b,c))/cross((float)a);
}
int result1(int a,int b,int c)
{
    return ((-b)-root(a,b,c))/cross((float)a);
}

int main()
{
    double x1,x2;
    int s,x,a,b,c,y,z,z1;
    scanf("%d%d%d",&a,&b,&c);
    x=square(b);
    y=mul(a,c);
    z=root(a,b,c);
    z1=cross(a);
    x1=result(a,b,c);
    x2=result1(a,b,c);
     printf("The result is :%lf\n",x1);
     printf("The result is :%lf\n",x2);
     return 0;
}
