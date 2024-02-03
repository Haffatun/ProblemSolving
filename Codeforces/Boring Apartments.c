#include<stdio.h>
int main()
{
    int t, x;
    scanf("%d", &t);
 
    while(t--)
    {
        int count=0;
        scanf("%d", &x);
        for(int i=1; i<=x; i++)
        {
            int n=i;
            count++;
            if(n==x)
            {
                break;
            }
            else
            {
                for(int j=2; j<=4; j++)
                {
                    n=(n*10)+i;
                    count+=j;
                    if(n==x)
                    {
                        break;
                    }
                }
                if(n==x)
                {
                    break;
                }
            }
 
        }
        printf("%d\n", count);
    }
}
