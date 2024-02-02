#include<stdio.h>
#include<math.h>
int main()
{
    int t, h, m, rem;
    scanf("%d", &t);
 
    while(t--)
    {
        scanf("%d%d", &h, &m);
 
        rem=((24-h)*60)-m;
        printf("%d\n", rem);
    }
}
