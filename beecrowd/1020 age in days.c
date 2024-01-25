#include <stdio.h>
 
int main() {
 
    int a, b, c, d, e;
    scanf ("%d", &a);
    b = a / 365;
    c = a % 365;
    d = c / 30;
    e = c % 30;
    printf ("%d ano(s)\n%d mes(es)\n%d dia(s)\n", b, d, e);
    return 0;
}
