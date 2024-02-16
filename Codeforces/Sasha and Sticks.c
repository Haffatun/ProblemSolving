#include<stdio.h>
int main()
{
    long long n, k, x;
    scanf("%lld %lld",&n,&k);
    x=n/k;
 
    if(x%2==1)
    {
        printf("YES\n");
    }
    else if(x%2==0)
    {
        printf("NO\n");
    }
}
