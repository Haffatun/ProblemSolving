#include<stdio.h>
int main()
{
    int t, k, r=0;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &k);
        for(int i=1; i<=k;i++)
        {
 
            if(i%10==3 || i%3==0)
            {
                k++;
 
            }
        }
        printf("%d\n",k);
    }
}
