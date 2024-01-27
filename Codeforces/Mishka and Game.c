#include <stdio.h>
 
int main() {
    
    int a, b, x = 0, y = 0, t, i;
    scanf ("%d", &t);
    
    for (i = 0; i < t; i++)
    {
        scanf ("%d%d", &a, &b);
        if (a > b)
        {
            x += 1;
        }
        else if (b > a)
        {
            y += 1;
        }
    }
    
    if (x > y)
    {
        printf("Mishka\n");
    }
    else if (x == y)
    {
        printf ("Friendship is magic!^^\n");
    }
    else if (y > x)
    {
        printf ("Chris\n");
    }
    
    return 0;
}
