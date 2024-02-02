#include<stdio.h>
int main()
{
    int n, count=0;
    scanf("%d", &n);
    char ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(ar[i]!=ar[i+1])
        {
            count++;
        }
    }
    printf("%d\n", count);
}
