#include <stdio.h>
 
int main() {
 
    int a, b, d, e;
    double c, f;
    scanf ("%d%d%lf", &a, &b, &c);
    scanf ("%d%d%lf", &d, &e, &f);
    double g = (b * c) + (e * f);
    
    printf ("VALOR A PAGAR: R$ %.2lf\n", g);
 
    return 0;
}
