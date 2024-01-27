#include<stdio.h>
int main()
{
    char a[1001];
    scanf("%s",&a);
    if(a[0]>=65 && a[0]<=90)
        printf("%s\n",a);
    else if(a[0]>=97 && a[0]<=122){
       a[0]=a[0]-32;
       printf("%s\n",a);
    }
    
}
