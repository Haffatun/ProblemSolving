#include <stdio.h>
 
int main() {
 
    double a, b, c, d, e, f, g, h;
    scanf ("%lf%lf%lf", &a, &b, &c);
    d = (a * c)/2;
    e = 3.14159 * c * c;
    f = (c * (a + b))/2;
    g = b * b;
    h = a * b;
    printf ("TRIANGULO: %.3lf\n", d);
    printf ("CIRCULO: %.3lf\n", e);
    printf ("TRAPEZIO: %.3lf\n", f);
    printf ("QUADRADO: %.3lf\n", g);
    printf ("RETANGULO: %.3lf\n", h);
 
    return 0;
}
