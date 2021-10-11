#include <stdio.h>
 int main()
 {
     char ch;
     scanf("%c",&ch);
     if(ch>='a'&&'z'>=ch)
     {
         printf("Lowercase\n");
     }
     if(ch>='A'&&'Z'>=ch)
     {
         printf("Uppercase\n");
     }
     system("pause");


     return 0;
 }
