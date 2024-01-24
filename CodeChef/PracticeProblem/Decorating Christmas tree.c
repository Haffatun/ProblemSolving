#include <stdio.h>
int main ()
{
    int t, n, x, y, m, r;
    scanf ("%d", &t);

    while (t--)
    {
        scanf ("%d%d%d", &n, &x, &y);

        if (x < n)
        {
            printf("NO\n");
            continue;
        }
        else if (x == n && y <(3*n))
        {
            printf("NO\n");
            continue;
        }

        m = y/3;
        r = n - m;
        x-=m;

        if (x >= 2*r)
            printf("YES\n");

        else
            printf ("NO\n");

    }

}
