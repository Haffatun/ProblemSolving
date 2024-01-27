#include <stdio.h>
int main ()
{
    int t, n, d, ans;
    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        scanf ("%d", &n);
        d = (n-3)/3;
        ans = d-1;
        printf("%d\n", ans);
    }
}
