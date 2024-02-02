#include<stdio.h>
#include<string.h>
int main()
{
    int n,l;
    char c[100];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",&c);
 
        l=strlen(c);
        (l<=10)? printf("%s\n",c) : printf("%c%d%c\n",c[0],(l-2),c[l-1]);
    }
 
}
