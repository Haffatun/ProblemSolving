#include <stdio.h>

int main(void) {
	int a, b, c, d, i;
	scanf ("%d", &a);
	for (i=0; i<a; i++){
	    scanf ("%d%d", &b, &c);
	    if (b > c) {
	        d = b - c;
	        printf ("%d\n", d);
	    }
	    else {
	        printf ("0\n");
	    }
	}
	return 0;
}
