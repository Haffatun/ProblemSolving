#include <stdio.h>

int main(void) {
    int a, x, y, i;
    scanf ("%d", &a);
    for (i = 0; i <a; i++){
        scanf ("%d %d", &x, &y);
	    if (x >= y){
	        printf("YES\n");
	    }
	    else {
	        printf ("NO\n");
	    }
    }
	return 0;
}
