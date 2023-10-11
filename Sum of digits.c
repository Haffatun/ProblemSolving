#include<stdio.h>
int main()
{
    int a,b,num;
    scanf("%d",&a);
    while(a--)
    {
        scanf("%d",&num);
        int sum=0;
        while(num!=0)
        {
            b=num%10;
            sum=sum+b;
            num=num/10;
        }
        printf("%d\n",sum);
    }
} 
