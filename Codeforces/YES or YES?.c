#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char str[4];
        scanf("%s", str);
        if((str[0]=='Y'||str[0]=='y')&&(str[1]=='E'||str[1]=='e')&&(str[2]=='S'||str[2]=='s'))
        {
            printf("Yes\n");
        }
        else printf("No\n");
    }
}
