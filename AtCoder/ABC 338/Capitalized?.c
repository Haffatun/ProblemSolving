#include<string.h>
#include<ctype.h>
int main()
{
    int l, x=0;
    char c[101];
    scanf("%s",c);
    l=strlen(c);
    if(isupper(c[0]))
    {
        x++;
    }
    for(int i = 1; i < l; i++)
    {
        if(islower(c[i]))
        {
            x++;
        }
    }
    if(x == l)
    {
        printf("Yes\n");
    }
    else printf("No\n");


}
