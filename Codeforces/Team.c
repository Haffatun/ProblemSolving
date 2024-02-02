#include <stdio.h>
int main ()
{
    int t, a, b, c, n=0;
    scanf ("%d", &t);
    while (t--)
    {
        scanf ("%d%d%d", &a, &b, &c);
        if ((a==1 && b==1 && c==1) || (a==1 && b==1) || (a==1 && c==1) || (b==1 && c==1))
        {
           n++;
        }
        }
        printf ("%d\n", n);
}
