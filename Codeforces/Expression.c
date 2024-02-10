#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if((a==1 && b==1 && c==1) || (a==1 && c==1))
        printf("%d\n", a+b+c);
    else if((a==1 && b==1) || (a==1 && b!=1))
        printf("%d\n", (a+b)*c);
    else if((b==1 && c==1) || (b!=1 && c==1))
        printf("%d\n", a*(b+c));
    else if(b==1)
    {
        int x=a*(b+c);
        int y=(a+b)*c;
        (x>y)? printf("%d\n", x): printf("%d\n", y);
    }
    else printf("%d\n", a*b*c);
}
