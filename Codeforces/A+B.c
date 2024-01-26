#include <stdio.h>
 
int main() {
    int a, b, d, t, i;
    char c;
    scanf ("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf ("%d%c%d", &a, &c, &b);
        d = a + b;
        printf ("%d\n",d);
    }
 
    return 0;
}
