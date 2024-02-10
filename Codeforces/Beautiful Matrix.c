#include<stdio.h>
int main()
{
  int i, j, r, c, count=0;
  int arr[6][6];
 
  for(i=1; i<=5; i++)
  {
    for(j=1; j<=5; j++)
    {
      scanf("%d", &arr[i][j]);
      if(arr[i][j]==1)
      {
        r=i;
        c=j;
      }
    }
  }
  if(r>3)
    count+=(r-3);
  else
    count+=(3-r);
  if(c>3)
    count+=(c-3);
  else
    count+=(3-c);
  printf("%d\n", count);
}
