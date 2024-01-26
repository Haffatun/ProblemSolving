#include<stdio.h>
int main()
{
    long long n,x,y,mx=0;
    scanf("%lld", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lld%lld", &x, &y);
        if (mx < (x+y))
        {
            mx = x+y;
        }
    }
    printf ("%lld\n", mx);
}
