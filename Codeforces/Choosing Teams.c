#include<stdio.h>
int main()
{
    int n, k, count=0;
    scanf("%d%d", &n, &k);
 
    int arr[n];
    for(int i=0; i<n; i++)
    {
      scanf("%d", &arr[i]);
      int t=arr[i]+k;
 
      if(t<=5)
      {
        count++;
      }
    }
    printf("%d\n", count/3);
}
