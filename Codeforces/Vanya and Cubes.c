#include<stdio.h>
int main()
{
    int n, x=0, y=0, z=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        x+=i;
        y+=x;
        if(y>n)
       {
           break;
       }
        z++;
    }
    printf("%d\n", z);
}
