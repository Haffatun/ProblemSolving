#include <stdio.h>
int main ()
{
    int t, n, min;
    scanf ("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf ("%d", &n);
        if (n == 1)
        {
            printf ("1 1\n");
        }
        else if (n > 1)
        {
            min = n/2;
            if (n%2 != 0)
                min ++;
            printf ("%d %d\n", min, n);
        }
    }


}
