#include <stdio.h>
 
int main() {
    int a, b, c, t, i;
    scanf ("%d", &t);
    
    for (i = 0; i < t; i++)
    {
        scanf ("%d%d%d", &a, &b, &c);
        
        if (a+b == c)
        {
            printf ("+\n");
        }
        else
        {
            printf ("-\n");
        }
    }
 
    return 0;
}
