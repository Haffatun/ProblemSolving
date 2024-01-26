#include <stdio.h>
 
int main() {
    int a, b, i, x = 1, y = 1;
    scanf ("%d%d", &a, &b);
    x = a * 3;
    y = b * 2;
    if (x > y)
    {
        printf ("1\n");
    }
    else
    {
        for (i = 2; i < 10000; i++)
        {
            x = x * 3;
            y = y * 2;
            if (x > y)
            {
                printf ("%d\n", i);
                break;
            }
        }
    }
    
    return 0;
}
