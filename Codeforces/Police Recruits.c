#include<stdio.h>
#include<string.h>
 
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int in=0, count=0;
    for(int i=0; i<n; i++)
    {
        if(in+arr[i]==-1)
        {
            count++;
        }
        else if(in+arr[i]>=0)
        {
            in+=arr[i];
        }
    }
    printf("%d\n", count);
}
