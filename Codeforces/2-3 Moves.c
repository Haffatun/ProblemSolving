#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
 
    while(t--)
    {
        long long n;
        scanf("%lld", &n);
        if(n==1)
        {
            printf("2\n");
        }
        else if(n%3==0)
        {
            printf("%lld\n", n/3);
        }
        else if(n%3!=0)
        {
            printf("%lld\n",(n/3)+1);
        }
    }
 
}
