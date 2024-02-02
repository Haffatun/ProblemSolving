#include<stdio.h>
#include<string.h>
int main()
{
    char ch[101];
    scanf("%s", ch);
 
    int len=strlen(ch);
    int x = 0;
    for (int i = 0; i < len; i++)
    {
        if(ch[i] == 'H' || ch[i] == 'Q' || ch[i] == '9')
        {
            x++;
            break;
        }
 
    }
    (x > 0)? printf("YES\n") : printf("NO\n");
}
