#include <stdio.h>

int main(void) {
	int a, b, c, d, i;
	scanf ("%d", &a);
	for (i = 0; i < a; i++){
	    scanf ("%d%d%d", &b, &c, &d);
	    if (b == (c + d) || c == (d + b) || d == (b + c)){
	        printf ("YES\n");
	    }
	    else {
	        printf ("NO\n");
	    }
	}
	return 0;
}
