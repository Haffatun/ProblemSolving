#include <stdio.h>
#include<string.h>
int main()
{
	char str[101];
	char s[101];
	scanf("%s", str);
	int len=strlen(str);
	for(int i=len; i>=0; i--)
    {
        if(str[i]=='.')
        {
            int k= i;
            for(int j=0; j<len-i; j++)
            {
                k++;
                if(j==len-i-1)
                {
                    s[len-i-1]='\0';
                }
                s[j]=str[k];

            }
            break;
        }
    }

    printf("%s\n", s);

}
