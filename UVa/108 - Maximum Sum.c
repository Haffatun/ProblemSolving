#include <stdio.h>
int A[100][100][100];
int main ()
{
    int n, i, j, k, x, y, sum, max, B;
    while(scanf("%d", &n)!=EOF)
    {
        max = -127;
        sum = 0;
        int num[n][n];

        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &num[i][j]);



        for (i=0; i<n; i++)
            for (j=0; j<n; j++)
            {
                B = 0;
                for (k=j; k<n; k++)
                {
                    A[i][j][k] = num[i][k];
                    A[i][j][k] += B;
                    B = A[i][j][k];
                }
            }



        for (i=0; i<n; i++)
            for (j=i; j<n; j++)
                for (x=0; x<n; x++)
                    for (y=x; y<n; y++)
                    {
                        sum = 0;
                        for (k=x; k<=y; k++)
                            sum += A[k][i][j];
                        if (sum > max)
                            max = sum;
                    }
        printf("%d\n", max);
    }
    return 0;
}
