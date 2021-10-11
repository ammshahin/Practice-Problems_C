#include<stdio.h>
int main()
{
    char a;
    scanf("%ch",&a);
    if (a>='a'&&a<='z'){
        printf("ch is lower case\n");

    }
    if (a>='A'&&a<='Z')
        {
        printf("ch is upper case\n");

    }
    return 0;
}
