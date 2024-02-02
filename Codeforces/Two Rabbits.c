#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long x, y, a, b;
        scanf("%lld%lld%lld%lld", &x, &y, &a, &b);
        ((y-x)%(a+b) == 0)? printf("%lld\n",(y-x)/(a+b)): printf("-1\n");
    }
}
