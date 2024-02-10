#include<stdio.h>
int main()
{
    int t, n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        long long arr[n];
        for(int i=0; i<n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        long long min=arr[0];
        long long max=arr[0];
        for(int i=0; i<n; i++)
        {
            if(arr[i]<min)
            {
                min=arr[i];
            }
            else if(arr[i]>max)
            {
                max=arr[i];
            }
        }
        printf("%d\n", max-min);
    }
}
