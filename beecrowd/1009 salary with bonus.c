#include<stdio.h>

int main()
{
    char a, b, c, d;
    scanf("%c%c%c%c",&a, &b, &c,&d);
    double salary;
    scanf("%lf",&salary);
    double sale;
    scanf("%lf",&sale);
    double per = (sale * 15)/100;
    double total = per + salary;
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
