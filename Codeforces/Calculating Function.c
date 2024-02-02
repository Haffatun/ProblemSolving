#include<stdio.h>
int main()
{
    long long n, fn;
    scanf("%lld",&n);
    if(n%2==0)
    {
        fn=n/2;
    }
    else
    {
        fn=((n+1)/2)*(-1);
    }
    printf("%lld\n",fn);
 
    return 0;
}
//Another one
#include<stdio.h>
int main()
{
    long long n;
    scanf("%lld", &n);
    (n%2==0)? printf("%lld\n", n/2): printf("-%lld\n",(n+1)/2);
 
}
