#include <stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i;
    int v=0,c=0,ws=0;
    printf("Enter the Sentence:\n");
    gets(a);
    printf("Sample Output:");
    puts(a);
    for(i=0; a[i]!='\0'; i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' ||
                a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' )
        {
            v++;
        }
        else if((a[i] >='a' && a[i] <='z') || (a[i] >='A' && a[i]<='Z'))
        {
            c++;
        }
        else if(a[i]==' ')
        {
            ws++;
        }
    }
    printf("Number Of Vowels: %d\n",v);
    printf("Number Of Consonant: %d\n",c);
    printf("Number Of White Spaces: %d\n",ws);
    return 0;
}
