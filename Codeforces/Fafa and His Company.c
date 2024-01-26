#include <stdio.h>
 
int main() {
    int n, x = 0, i;
    scanf ("%d", &n);
    
    for (i = 1; i <= (n/2); i++)
    {
        if (n % i == 0)
        {
            x++;
        }
    }
    printf ("%d\n", x);
 
    return 0;
}
