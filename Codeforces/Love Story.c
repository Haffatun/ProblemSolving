#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
 
    for(int i=0; i<n; i++)
    {
        char str[11];
        int count=0;
        scanf("%s", str);
 
        if(str[0]!='c')
        {
            count++;
        }
        if(str[1]!='o')
        {
            count++;
        }
        if(str[2]!='d')
        {
            count++;
        }
        if(str[3]!='e')
        {
            count++;
        }
        if(str[4]!='f')
        {
            count++;
        }
        if(str[5]!='o')
        {
            count++;
        }
        if(str[6]!='r')
        {
            count++;
        }
        if(str[7]!='c')
        {
            count++;
        }
        if(str[8]!='e')
        {
            count++;
        }
        if(str[9]!='s')
        {
            count++;
        }
        printf("%d\n", count);
    }
 
}
