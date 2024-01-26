#include <stdio.h>
int main ()
{
    int n, count = 0;
    scanf("%d", &n);

    if(n == 1)
    {
		count = 1;
	}
	else if(n % 2 == 0)
    {
		count = n - (n / 2 - 1);
	}
	else
    {
		count =n - (n / 2);
	}

	printf("%d\n", count);
}
