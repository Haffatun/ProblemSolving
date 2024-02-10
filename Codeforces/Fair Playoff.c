#include<stdio.h>
int main()
{
    int t, a, b, c, d;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if(a>c && d>b)
        {
            printf("YES\n");
        }
        else if(a>d && c>b)
        {
            printf("YES\n");
        }
        else if(b>c && d>a)
        {
            printf("YES\n");
        }
        else if(b>d && c>a)
        {
            printf("YES\n");
        }
        else printf("NO\n");
    }
}
