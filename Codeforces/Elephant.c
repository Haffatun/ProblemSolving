#include <stdio.h>
int main() {
    int s;
    scanf("%d", &s);
    int a = s / 5;
    if (s % 5 == 0)
    {
        printf ("%d\n", a);
    }
    else 
    {
        printf ("%d\n", ++a);
    }
    return 0;
}
