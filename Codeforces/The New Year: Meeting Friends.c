#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(a>b && b>c)
    {
        printf("%d\n", a-c);
    }
    else if(c>b && b>a)
    {
        printf("%d\n", c-a);
    }
    else if(b>c && c>a)
    {
        printf("%d\n", b-a);
    }
    else if(a>c && c>b)
    {
        printf("%d\n", a-b);
    }
    else if(c>a && a>b)
    {
        printf("%d\n", c-b);
    }
    else if(b>a && a>c)
    {
        printf("%d\n", b-c);
    }
}
