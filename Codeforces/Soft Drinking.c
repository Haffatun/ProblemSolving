#include<stdio.h>
int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d%d%d%d%d%d%d%d", &n, &k, &l, &c, &d, &p, &nl, &np);
    int x, y, z, min;
    x=(k*l)/nl;
    y=c*d;
    z=p/np;
    if(x<=y && x<=z)
    {
        min=x;
    }
    else if(y<=x && y<=z)
    {
        min=y;
    }
    else if(z<=x && z<=y)
    {
        min=z;
    }
    printf("%d\n", min/n);
}
