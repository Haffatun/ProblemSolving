#include<stdio.h>
#include<string.h>
int main()
{
    char ch[51];
    int n, x=0;
    scanf("%d", &n);
    scanf("%s", ch);
 
    for (int i = n; i > 0; i--)
    {
        if(ch[i]==ch[i-1])
           x++;
    }
    printf("%d\n",x);
}
