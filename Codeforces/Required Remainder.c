#include<stdio.h>
int main()
{
    int t, x, y, n;
    scanf("%d", &t);
 
    while(t--)
    {
        scanf("%d%d%d", &x, &y, &n);
 
        printf("%d\n", (n-y)/x*x+y);
    }
}
 
