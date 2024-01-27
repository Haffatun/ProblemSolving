#include <stdio.h>
int main ()
{
    int t, s;
    scanf ("%d", &t);
 
    while (t--)
    {
        int x = 0, y = 0;
        scanf ("%d", &s);
        char str[s];
        scanf ("%s",str);
        for (int i = 0; i < s; i++)
        {
            if (str[i] == '+')
            {
                x++;
            }
            else if (str[i] == '-')
            {
                y++;
            }
        }
 
        if (x == y)
        {
            printf ("0\n");
        }
        else if (x > y)
        {
            printf ("%d\n", (x-y));
        }
        else if (x < y)
        {
            printf ("%d\n", (y-x));
        }
    }
}
