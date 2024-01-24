#include <stdio.h>

int main(void) {
	int x, y, z, t, i, a;
	scanf("%d", &t);
	
	for (i = 0; i < t; i++)
	{
	    scanf ("%d%d%d", &x, &y, &z);
	    a = (z - y)/x;
	    printf ("%d\n", a);
	}
	return 0;
}
