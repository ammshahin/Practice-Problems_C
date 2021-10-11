#include <stdio.h>
 int main()
 {
     double a = 50.52, b = 60, sum;
     sum = a + b;
     printf("%lf + %lf = %lf\n", a, b, sum);
     printf("%lf + %lf = %lf", b, a, sum);
     return 0;
 }
