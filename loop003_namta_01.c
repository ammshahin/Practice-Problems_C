 #include <stdio.h>
 int main()
 {
     int n = 5,x;
     int i;
     x = 0;
     for(i = 1; i <= 10; i = i + 1) {
         x = x + n;
         printf("%d X %d = %d\n", n, i, x);
     }
     return 0;
 }
