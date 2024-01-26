#include <stdio.h>
 
int main() {
    long long int t, n, p, i;
    scanf ("%lld", &t);
 
    for (i = 0; i < t; i++)
    {
        scanf ("%lld", &n);
        n++;
        p = (n * n) + 1;
        
        printf ("%lld\n", p);
    }
 
    return 0;
}
