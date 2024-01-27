#include <stdio.h>
 
int main()
{
 
    int t, i; long long n, s, c;
    scanf ("%d", &t);
 
    while (t--)
    {
        scanf ("%lld%lld", &n, &s);
 
        c = s/(n*n);
        printf ("%lld\n", c);
    }
 
}
