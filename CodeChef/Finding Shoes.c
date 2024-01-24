#include <stdio.h>

int main(void) {
	int x, y, t, i, a;
	scanf("%d", &t);
	
	for (i = 0; i < t; i++)
	{
	    scanf ("%d%d", &x, &y);
	    if (x <= y)
	    {
	        a = x;
	    }
	    else 
	    {
	        a = (x*2) - y;
	    }
	    printf ("%d\n", a);
	}
	return 0;
}
