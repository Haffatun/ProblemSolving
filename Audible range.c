#include <stdio.h>

int main(void) {
	int a, b, i;
	scanf ("%d",&a);
	for (i = 0; i < a; i++){
	    scanf ("%d",&b);
	    if (b < 67 || b > 45000){
	        printf ("NO\n");
	    }
	    
	    else if (b >= 67 || b <= 45000) {
	        printf ("YES\n");
	    }
	}
	return 0;
}
