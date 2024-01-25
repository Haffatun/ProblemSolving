#include <stdio.h>
int main (){
    float n1, n2, n3, n4, av, x;
    scanf ("%f%f%f%f", &n1, &n2, &n3, &n4);
    n1 *= 2;
    n2 *= 3;
    n3 *= 4;
    av = (n1 + n2 + n3 + n4)/ 10;
    printf ("Media: %.1f\n", av);
    if (av >= 7){
        printf ("Aluno aprovado.\n");
    }
    else if (av >= 5){
        printf ("Aluno em exame.\n");
        scanf ("%f", &x);
        printf ("Nota do exame: %.1f\n", x);
        av = (av + x)/ 2;
        if (av >= 5){
            printf ("Aluno aprovado.\n");
        }
        else {
            printf ("Aluno reprovado.\n");
        }
        printf ("Media final: %.1f\n", av);
    }
    else {
        printf ("Aluno reprovado.\n");
    }
    return 0;
}
