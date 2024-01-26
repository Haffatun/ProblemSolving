#include <stdio.h>
 
int main() 
{
    int  t, r, i;
    scanf ("%d", &t);
    
    for (i = 0; i < t; i++)
    {
        scanf ("%d", &r);
        
        if (1900 <= r)
        {
            printf ("Division 1\n");
        }
        else if (1600 <= r && r <= 1899)
        {
            printf ("Division 2\n");
        }
        else if (1400 <= r && r <= 1599)
        {
            printf ("Division 3\n");
        }
        else if (r <= 1399)
        {
            printf ("Division 4\n");
        }
    }
    return 0;
}
