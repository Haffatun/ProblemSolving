#include <stdio.h>

int main() 
{
    int  t, a, b, c, d, i;
    scanf ("%d", &t);
    
    for (i = 0; i < t; i++)
    {
        scanf ("%d%d%d%d", &a, &b, &c, &d);
        
        if ((a > b+c+d) || (b > a+c+d) || (c > a+b+d) || (d > a+b+c))
        {
            printf("YES\n");
        }
        else
        {
            printf ("NO\n");
        }
    }
    return 0;
}
