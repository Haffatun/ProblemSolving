#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s",s);
    int sz = strlen(s);
    int one=0, two=0, three=0;
    for(int i=0; i<sz; i++)
    {
        if(s[i]=='1')
        {
            one++;
        }
        else if(s[i]=='2')
        {
            two++;
        }
        else if(s[i]=='3')
        {
            three++;
        }
    }
 
    for(int i=0; i<sz; i++)
    {
        if(i<one*2)
        {
            s[i] = '1' ;
            s[i+1]='+';
            i++;
        }
        else if(i<((one*2)+(two*2)))
        {
            s[i] = '2' ;
            s[i+1]='+';
            i++;
        }
        else if(i<sz)
        {
            s[i] = '3' ;
            s[i+1]='+';
            i++;
        }
 
    }
    s[sz]='\0';
    printf("%s\n",s);
 
}
