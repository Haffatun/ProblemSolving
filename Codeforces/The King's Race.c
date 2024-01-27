#include <stdio.h>

int main()
{
	long long n, x, y;
	scanf("%lld%lld%lld", &n, &x, &y);

	long long dw = (x - 1) + (y - 1);

	long long db = (n - x) + (n - y);
	if (dw == db || dw < db)
    {
		printf ("White\n");
	} else
    {
        printf ("Black\n");
	}

}
