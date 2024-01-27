#include <stdio.h>
 
int main() {
     long long int n, a, b, c, d, e;
     scanf ("%lld", &n);
     
     a = n / 100;
     b = (n % 100) / 20;
     c = (n % 20) / 10;
     d = (n % 10) / 5;
     e = n % 5;
     
     printf ("%lld\n", a+b+c+d+e);
     
 
    return 0;
}
