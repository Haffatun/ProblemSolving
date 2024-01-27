#include <stdio.h>
 
int main() {
    int a, b, c, d;
    scanf ("%d%d%d%d", &a, &b, &c, &d);
    if (a>b && a>c && a>d)
    {
        printf ("%d %d %d\n", a-d, a-c, a-b);
    }
   else if (b>a && b>c && b>d)
    {
        printf ("%d %d %d\n", b-d, b-c, b-a);
    }
    else if (c>a && c>b && c>d)
    {
        printf ("%d %d %d\n", c-d, c-b, c-a);
    }
    else if (d>c && d>b && d>a)
    {
        printf ("%d %d %d\n", d-c, d-b, d-a);
    }
    return 0;
}
