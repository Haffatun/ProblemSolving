#include<stdio.h>
 
int main()
{
    int t, a, b, c, d;
    scanf("%d", &t);
 
    while(t--)
    {
        scanf("%d%d", &a, &b);
        scanf("%d%d", &c, &d);
        if((a==c && b+d==a)||(a==d && b+c==a)||(b==c && a+d==b)||(b==d && a+c==b))
        {
            printf("Yes\n");
        }
        else printf("No\n");
    }
 
}
