#include <stdio.h>
 
int main()
{
 
    int n, i;
    scanf ("%d", &n);
 
    for (i = 1; i <= n; i++)
    {
        if (i == n)
        {
            if (i%2 == 1)
            {
                printf ("I hate it\n");
            }
            else if (i%2 == 0)
            {
                printf ("I love it\n");
            }
        }
        else if (i%2 == 1)
        {
            printf ("I hate that ");
        }
        else if (i%2 == 0)
        {
            printf ("I love that ");
        }
 
    }
 
}
