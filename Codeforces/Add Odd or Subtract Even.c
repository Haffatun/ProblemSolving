#include <stdio.h>
 
int main() {
    int t, a, b, x = 0, i;
    scanf ("%d", &t);
    
    for (i = 0; i < t; i++)
    {
        scanf ("%d%d", &a, &b);
        if (a == b)
        {
            x = 0;
        }
        else if (a < b)
        {
           x = b - a; 
           if(x%2==0)
            {
                x = 2;
            }
            else if(x%2!=0)
            {
                x = 1;
            }
        }
        else if (a > b)
        {
            x = a - b;
            if (x%2 == 0)
            {
                x = 1;
            }
            else if(x%2 != 0)
            {
                x = 2;
            }
        }
        printf ("%d\n", x);
    }
 
    return 0;
}
