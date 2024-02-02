#include <stdio.h>
 
int main(){
 
    int s, sa1 = 0, sa2 = 0;
    scanf("%d", &s);
 
    int a1[s], a2[s];
    int i, j;
    for (i = 0; i < s; i++)
    {
        scanf("%d", &a1[i]);
        sa1 +=a1[i];
    }
    for (j = 0; j < s; j++)
    {
        scanf("%d", &a2[j]);
        sa2 +=a2[j];
    }
 
    if (sa1 >= sa2)
    {
        printf ("Yes\n");
    }
 
    else printf ("No\n");
}
