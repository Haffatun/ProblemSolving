#include <stdio.h>
int main()
{
    int t, x, y, z;
    scanf("%d", &t);

    while (t--)
    {
        scanf ("%d%d%d", &x, &y, &z);

        if (((z*2)+x) >= y)
        {
            printf ("Yes\n");
        }
        else printf ("No\n");
    }
}
