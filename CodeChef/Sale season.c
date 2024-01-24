#include <stdio.h>

int main(void) {
	int a, b, i;
    scanf ("%d", &a);
    for (i = 0; i < a; i++){
        scanf ("%d", &b);
        if (b <= 100){
            printf ("%d\n", b);
        }
        else if (b > 100 && b <= 1000){
            b = b - 25;
            printf ("%d\n", b);
        }
        else if (b > 1000 && b <= 5000){
            b = b - 100;
            printf ("%d\n", b);
        }
        else if (b > 5000){
            b = b - 500;
            printf ("%d\n", b);
        }
    }
	return 0;
}

