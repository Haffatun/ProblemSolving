#include <stdio.h>

int main(void) {
	int a, b, c, i;
	scanf ("%d", &a);
	for (i = 0; i < a; i++){
	    scanf ("%d%d", &b, &c);
	    if (b < c){
	        printf ("REPAIR\n");
	    }
	    else if (b == c){
	        printf ("ANY\n");
	    }
	    else if (b > c){
	        printf ("NEW PHONE\n");
	    }
	}
	return 0;
}
