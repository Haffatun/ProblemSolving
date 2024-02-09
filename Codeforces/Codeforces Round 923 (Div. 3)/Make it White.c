#include <stdio.h>
int main()
{
    int t, n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        char str[11];
        scanf("%s", str);
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(str[i]=='B')
            {
                for(int j=n-1; j>=i; j--)
                {
                    if(str[j]=='B')
                    {
                        count=(j-i+1);
                        break;
                    }
 
                }
                break;
            }
        }
        printf("%d\n", count);
    }
}
