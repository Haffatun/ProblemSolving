#include <stdio.h>
#include<string.h>
int main()
{
	int t, count=0;
	scanf("%d", &t);
 
	while(t--)
    {
        char str[21];
        scanf("%s", str);
 
        if(str[0]=='T')
        {
            count=count+4;
        }
        else if(str[0]=='C')
        {
            count=count+6;
        }
        else if(str[0]=='O')
        {
            count=count+8;
        }
        else if(str[0]=='D')
        {
            count=count+12;
        }
        else if(str[0]=='I')
        {
            count=count+20;
        }
    }
    printf("%d\n",count);
 
}
