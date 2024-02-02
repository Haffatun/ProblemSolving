#include<stdio.h>
#include<string.h>
int main()
{
    int t, len;
    scanf("%d", &t);
 
    while(t--)
    {
        char str[101];
        int n, flag=0;
        scanf("%s", str);
 
        if (strlen(str) % 2 == 1)
        {
            printf("NO\n");
            continue;
        }
        else
        {
            int n = strlen(str);
            for (int i = 0; i < n / 2; i++)
            {
                if (str[i] != str[i + (n / 2)])
                {
                    flag=1;
                    continue;
                }
            }
        }
        (flag==0)?printf("YES\n"):printf("NO\n");
    }
}
