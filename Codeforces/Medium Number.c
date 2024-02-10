#include<stdio.h>
int main()
{
  int a, b, c, t;
  scanf("%d", &t);
  while(t--)
  {
    scanf("%d%d%d", &a, &b, &c);
    if((a<=b && b<=c) || (c<=b && b<=a))
      printf("%d\n", b);
    else if((b<=c && c<=a) || (a<=c && c<=b))
      printf("%d\n", c);
    else if((b<=a && a<=c) || (c<=a && a<=b))
      printf("%d\n", a);
  }
}
