#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    (a>b)? printf("%d %d\n",b,(a-b)/2): printf("%d %d\n",a,(b-a)/2);
}
