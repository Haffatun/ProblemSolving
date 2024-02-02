#include<stdio.h>
int main()
{
    int n,k,i, arr[100],x=0;
    scanf("%d %d" , &n, &k);
 
    for (i=0; i<n; i++)
    {
        scanf("%d" , &arr[i]);
 
    }
 
    for (i=0; i<n; i++)
    {
        if ((arr[i]>=arr[k-1]) && arr[i]>0)
        {
            x++;
        }
    }
    printf("%d\n" , x);
 
 
}
