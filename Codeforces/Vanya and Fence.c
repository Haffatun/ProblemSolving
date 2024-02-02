#include<stdio.h>
int main()
{
    int n, h, a, width=0;
    scanf("%d%d", &n, &h);
    while(n--)
    {
        scanf("%d", &a);
        if(h<a)
        {
            width+=2;
        }
        else
        {
            width++;
        }
    }
    printf("%d\n", width);
 
}
