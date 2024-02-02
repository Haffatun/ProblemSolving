#include <stdio.h>
int main ()
{
    int t, a, b, c, d;
    scanf ("%d", &t);
    while (t--)
    {
        int x = 0;
        scanf ("%d%d%d%d", &a, &b, &c, &d);
        if (a<b)
        {
            x++;
        }
        if (a<c)
        {
            x++;
        }
        if (a<d)
        {
            x++;
        }
        printf ("%d\n", x);
    }
}
