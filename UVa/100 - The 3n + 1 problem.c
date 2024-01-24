#include <stdio.h>

int count(int n)
{
    int num = 1;
    while(n!=1)
    {
      if(n&1)
      {
          n = (3*n+1)/2;
          num+=2;
      }
      else
      {
          n/=2;
          num++;
      }
    }
    return num;
}
int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b)!= EOF)
    {
        int i, m=1, large, small;
        if(a>b)
            large =a, small = b;

        else
            small = a, large = b;

        for (i = small; i <= large; i++)
        {
            int r = count(i);
            if (r > m)
                m = r;
        }
        printf ("%d %d %d\n", a, b, m);
    }
    return 0;
}
