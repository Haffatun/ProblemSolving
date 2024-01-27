#include <stdio.h>
 
int main() {
    int a, b, c, x = 0, y = 0, z = 0, i, t;
    scanf ("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf ("%d%d%d", &a, &b, &c);
        x += a;
        y += b;
        z += c;
    }
     if ( x == 0 && y == 0 && z == 0)
        {
            printf ("YES\n"); 
        }
        else 
        {
            printf ("NO\n");
        }
 
    return 0;
}
