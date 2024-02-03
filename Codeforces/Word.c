include<stdio.h>
#include<string.h>
 
int main()
{
    char s[101];
    while(scanf("%s", &s)!=EOF)
    {
        char* c=s;
        int u=0, l=0, i=0;
        for(int i=0; i<strlen(s); i++)
        {
 
            if(s[i]>='A' && s[i]<='Z')
            {
                u++;
            }
            else if(s[i]>='a' && s[i]<='z')
            {
                l++;
            }
        }
        (u>l)? printf("%s\n", strupr(s)):printf("%s\n", strlwr(s));
    }
}
