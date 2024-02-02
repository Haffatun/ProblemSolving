#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    char t[101];
    gets(s);
    gets(t);
    int ls=strlen(s);
    int lt=strlen(t);
    int count=0;
 
    for(int i=0, j=lt-1; i<ls, j>=0; i++, j--)
    {
        if(s[i]==t[j])
        {
            count++;
 
        }
    }
    if(count==ls)
    {
        printf("YES\n");
    }
    else printf("NO\n");
 
}
→Judgement Protocol
Test: #1,
