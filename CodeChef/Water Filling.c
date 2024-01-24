#include <stdio.h>

int main(void) {
	int a, b, c, d, i;
	scanf ("%d", &a);
	for (i = 0; i < a; i++){
	    scanf ("%d%d%d", &b, &c, &d);
	    if ((b == 0 && c == 0 && d == 0) || (b == 0 && c == 0 && d == 1) || (b == 0 && c == 1 && d == 0) || (b == 1 && c == 0 && d == 0)) {
	        printf ("Water filling time\n");
	    }
	    else if ((b == 1 && c == 1 && d == 1) || (b == 0 && c == 1 && d == 1) || (b == 1 && c == 1 && d == 0) || (b == 1 && c == 0 && d == 1)) {
	        printf ("Not now\n");
	    }
	}
	return 0;
}
