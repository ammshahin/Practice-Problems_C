#include<stdio.h>
int main()
{
    int x=5,*p;
    p=&x;
    printf("%d\n",x);
    printf("%d\n",&x);
    printf("%x\n",&x);
    printf("%d\n",p);
    printf("%d\n",*p);

}
