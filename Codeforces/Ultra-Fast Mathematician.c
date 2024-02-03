include<stdio.h>
#include<string.h>
int main()
{
    char a[101], b[101], res[101];
    scanf("%s", a);
    scanf("%s", b);
    int l=strlen(a);
    for(int i=0; i<l; i++)
    {
        res[i] = (a[i]==b[i])? '0': '1';
    }
    res[l]='\0';
    printf("%s\n", res);
}
