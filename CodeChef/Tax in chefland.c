#include <stdio.h>

int main(void) {
	int a, b, i;
	scanf ("%d", &a);
	for (i=0; i<a; i++){
	    scanf ("%d", &b);
	    if (b > 100){
	        b = b - 10;
	        printf ("%d\n", b);
	    }
	    else {
	        printf ("%d\n",b);
	    }
	}
	return 0;
}
