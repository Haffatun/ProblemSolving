#include <stdio.h>
int main ()
{
    int t, d, n;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf ("%d", &n);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &d);
        }
        switch (n)
        {
        case 1:
          printf("%d\n", (10-1)*24);
          break;
        case 2:
          printf("%d\n", (10-2)*21);
          break;
        case 3:
          printf("%d\n", (10-3)*18);
          break;
        case 4:
          printf("%d\n", (10-4)*15);
          break;
        case 5:
          printf("%d\n", (10-5)*12);
          break;
        case 6:
          printf("%d\n", (10-6)*9);
          break;
        case 7:
          printf("%d\n", (10-7)*6);
          break;
        case 8:
          printf("%d\n", (10-8)*3);
          break;
      }
    }

}
