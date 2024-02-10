#include<stdio.h>
#include<string.h>
int main()
{
    char str1[101],str2[101];
    gets(str1);
    gets(str2);
    strlwr(str1);
    strlwr(str2);
    int k=strcmp(str1,str2);
    printf("%d\n",k);
}
