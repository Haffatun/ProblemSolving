#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    scanf("%s", str);
    strlwr(str);
    int len=strlen(str);
    for(int i=0; i<len; i++)
    {
         if((str[i]=='a')|| (str[i]=='e')|| (str[i]=='i') ||
           (str[i]=='o')|| (str[i]=='u')|| (str[i]=='y'))
            str[i]='.';
         else printf(".%c",str[i]);
    }
    printf("\n");
 
}
