#include<stdio.h>
int main()
{
    int n;
    double a, x=0.0, y=0.0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%lf", &a);
        x+=a;
    }
    y=x/n;
    printf("%.12f\n", y);
}
