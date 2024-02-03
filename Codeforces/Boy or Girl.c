#include<stdio.h>
#include<string.h>
 
int main()
{
    char s[101];
    scanf("%s", &s);
    int l=strlen(s);
    for(int i=0; i<strlen(s); i++)
    {
        for(int j=i+1; j<strlen(s); j++)
        {
            if(s[i]==s[j])
            {
                l--;
                break;
            }
 
        }
 
    }
    (l%2==0)? printf("CHAT WITH HER!\n"):printf("IGNORE HIM!\n");
}
