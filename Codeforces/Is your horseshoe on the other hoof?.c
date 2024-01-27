#include <stdio.h>
 
int main() {
    
    int a, b, c, d, x = 0;
    scanf ("%d%d%d%d", &a, &b, &c, &d);
    
   if(a==b){
        x++;
   }
   if(a==c){
        x++;
   }
   if(a==d){
        x++;
   }
   if((a!=b)&&(b==c)){
        x++;
   }
   if((a!=b)&&(b==d)){
        x++;
   }
   if((b!=c)&&(c==d)){
        x++;
   }
   
   printf ("%d\n", x);
   
    return 0;
}
