//1st solution
int main ()
{
    long long n, m, a;
    long long x, y, num;
    scanf ("%lld%lld%lld", &n, &m, &a);
 
    x = n / a;
    if (n % a != 0)
    {
        x++;
    }
 
    y = m / a;
    if (m % a != 0)
    {
        y++;
    }
 
    num = x * y;
    printf ("%lld\n", num);
 
    return 0;
}

//2nd solution
int main ()
{
    long long n, m, a;
    long long x, y, num;
    scanf ("%lld%lld%lld", &n, &m, &a);
 
    x = (n + a - 1) / a;
    y = (m + a - 1)/ a;
    
 
    num = x * y;
    printf ("%lld\n", num);
 
    return 0;
}
