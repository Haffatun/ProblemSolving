#include <stdio.h>
int main()
{
  int a, b, d;
  scanf("%d%d%d", &a, &b, &d);
  for(int i=a; i<=b; i++)
  {
    printf("%d ",i);
    i+=(d-1);
  }
  printf("\n");
}
