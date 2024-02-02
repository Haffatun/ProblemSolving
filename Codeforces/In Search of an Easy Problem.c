#include<stdio.h>
int main()
{
    int n, a, count=0;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &a);
        if(a==1)
        {
            count++;
        }
    }
    (count==0)?printf("EASY\n"):printf("HARD\n");
}
