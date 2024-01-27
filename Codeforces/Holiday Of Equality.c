#include <stdio.h>
 
int main()
{
 
    int s, i, max, p, n = 0;
    scanf("%d", &s);
 
    int A[s];
    for (i = 0; i < s; i++)
    {
        scanf ("%d",&A[i]);
    }max = A[0];
 
    for (i = 0; i < s; i++)
    {
 
        if (A[i] > max)
        {
            max = A[i];
        }
    }
 
    for (i = 0; i < s; i++)
    {
        if (A[i] < max)
        {
            p = max - A[i];
            n += p;
        }
 
    }
    printf ("%d\n", n);
 
}
