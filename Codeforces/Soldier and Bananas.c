#include <stdio.h>
 
int main() {
    long long k, n, w, i, a = 0;
    scanf("%lld%lld%lld", &k, &n, &w);
    for (i = 1; i <= w; i++)
    {
        a = a + (k * i);
    }
    
    if (n < a)
    {
        printf ("%lld\n", a-n);
    }
    else
    {
        printf ("0\n");
    }
    
    return 0;
}
