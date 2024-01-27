#include<stdio.h>
int main()
{
    int t,a,b,c,x;
    scanf("%d",&t);
 
    while(t--)
    {
        scanf("%d",&x);
        scanf("%d %d %d",&a,&b,&c);
 
        if(x==3)
        {
            if(c==0)
            {
                printf("NO\n");
            }
            else if(c==1)
            {
                if(a==0)
                    printf("NO\n");
                else
                    printf("YES\n");
            }
            else if(c==2)
            {
                if(b==0)
                    printf("NO\n");
                else
                    printf("YES\n");
            }
        }
        else if(x==2)
        {
            if(b==0)
            {
                printf("NO\n");
            }
            else if(b==1)
            {
                if(a==0)
                    printf("NO\n");
                else
                    printf("YES\n");
            }
            else if(b==3)
            {
                if(c==0)
                    printf("NO\n");
                else
                    printf("YES\n");
            }
        }
        else if(x==1)
        {
            if(a==0)
            {
                printf("NO\n");
            }
            else if(a==2)
            {
                if(b==0)
                    printf("NO\n");
                else
                    printf("YES\n");
            }
            else if(a==3)
            {
                if(c==0)
                    printf("NO\n");
                else
                    printf("YES\n");
            }
        }
    }
 
}
