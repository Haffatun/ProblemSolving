
int main()
{
    int n, a, b, x=0;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d%d", &a, &b);
        if(b-a>1)
        {
            x++;
        }
    }
    printf("%d\n", x);
}
