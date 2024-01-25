#include <stdio.h>
 
int main() {
 
   double A, B, grade = 0;
   scanf ("%lf %lf", &A, &B);
   
   A = A * 3.5;
   B = B * 7.5;
   
   grade = (A + B)/(3.5 + 7.5);
   printf ("MEDIA = %.5lf\n", grade);
   return 0;
}
