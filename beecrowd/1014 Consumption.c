#include <stdio.h>
int main (){
    int a;
    float b;
    scanf ("%d%f", &a, &b);
    double c = a/b;
    printf ("%.3lf km/l\n", c);
    return 0;
}
