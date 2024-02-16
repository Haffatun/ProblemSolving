#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
 
    int arr[n];
    for(int i=0; i<n; i++)
    {
       scanf("%d",&arr[i]);
    }
 
    int max=arr[0];
    int min=arr[0];
 
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else if(arr[i]<min)
        {
            min=arr[i];
        }
    }
 
    int d=max-min;
    printf("%d\n",d-n+1);
}
