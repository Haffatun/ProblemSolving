#include <stdio.h>

int main(void) {
	int a, b, c, d, e, f, i;
	scanf ("%d", &a);
	for (i = 0; i < a; i++){
	    scanf ("%d%d%d", &b, &c, &d);
	    e = c - d;
	    f = b * e;
	    printf ("%d\n", f);
	}
	return 0;
}

