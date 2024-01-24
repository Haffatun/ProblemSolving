#include <stdio.h>
#include <string.h>

struct GLASS {
   char clr[4];
   unsigned int s;
} C[6];


int main(){

   strcpy(C[0].clr, "BCG");
   strcpy(C[1].clr, "BGC");
   strcpy(C[2].clr, "CBG");
   strcpy(C[3].clr, "CGB");
   strcpy(C[4].clr, "GBC");
   strcpy(C[5].clr, "GCB");
   unsigned int T, B1, B2, B3, G1, G2, G3, C1, C2, C3;
   int I;
   while(scanf("%u%u%u%u%u%u%u%u%u", &B1, &G1, &C1, &B2, &G2, &C2, &B3, &G3, &C3) == 9){
      T = B1+B2+B3+G1+G2+G3+C1+C2+C3;
      C[0].s = T - (B1 + C2 + G3);
      C[1].s = T - (B1 + G2 + C3);
      C[2].s = T - (C1 + B2 + G3);
      C[3].s = T - (C1 + G2 + B3);
      C[4].s = T - (G1 + B2 + C3);
      C[5].s = T - (G1 + C2 + B3);
      I = 0;
      for(T = 1; T < 6; T++)
         if(C[I].s > C[T].s)
             I = T;

      printf("%s %u\n", C[I].clr, C[I].s);
   }

   return 0;
}
