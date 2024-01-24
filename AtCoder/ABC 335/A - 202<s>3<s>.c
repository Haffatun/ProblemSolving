#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf ("%s", s);
    int i, n = strlen(s);
    i = n-1;
    s[i]++;
    printf("%s\n", s);
}
