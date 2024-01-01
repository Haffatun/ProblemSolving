#include <stdio.h>

int main(void) {
	int a, b, c, d, i;
	scanf ("%d", &a);
	for (i = 0; i < a; i++){
	    scanf ("%d%d", &b, &c);
	    d = c - b;
	    printf ("%d\n", d);
	}
	return 0;
}
