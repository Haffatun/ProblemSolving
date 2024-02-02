#include<stdio.h>
int main()
{
    int t, count=0;
    char s[4];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", s);
        if(s[1]=='+'){
            count++;
        }
        else if(s[1] == '-'){
            count--;
        }
    }
    printf("%d", count);
}
