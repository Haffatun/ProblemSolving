#include<stdio.h>
#include<string.h>
int main()
{
    int n, A=0, D=0;
    scanf("%d", &n);
    char s[100001];
    scanf("%s",s);
    int l=strlen(s);
 
    for(int i=0; i<l; i++)
    {
        if(s[i]=='A')
        {
            A++;
        }
        else if(s[i]=='D')
        {
            D++;
        }
    }
    if (A==D)
    {
        printf("Friendship\n");
    }
    else if(A>D)
    {
        printf("Anton\n");
    }
    else if(A<D)
    {
        printf("Danik\n");
    }
 
}
