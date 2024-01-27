#include <stdio.h>

int main() {
    long long int t, n, p, i;
    scanf ("%lld", &t);

    for (i = 0; i < t; i++)
    {
        scanf ("%lld", &n);
        p = n / 2;
        if (n % 2 != 0)
        {
            p++;
        }
        
        printf ("%lld\n", p);
    }

    return 0;
}
