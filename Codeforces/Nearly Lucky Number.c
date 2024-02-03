#include <stdio.h>
int main()
{
	long long n, count=0, num=0, f;
	scanf("%lld", &n);
 
    while(n!=0)
    {
        f=n%10;
        n=(n-f)/10;
        num++;
        if(f==4 || f==7)
        {
            count++;
        }
    }
    (count==4 ||count==7)? printf("YES\n"): printf("NO\n");
}
