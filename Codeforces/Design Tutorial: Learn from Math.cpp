#include <bits/stdc++.h>
using namespace std;
 
int isComposite(int n)
{
    if(n<=1) return 0;
    if(n<=3) return 0;
    if(n%2==0 || n%3==0) return 1;
    for(int i=5; i*i<=n; i=i+6)
        if(n%i==0 || n%(i+2)==0) return 1;
    return 0;
}
int main()
{
    int t; cin >> t;
    for(int i =4; i<=t/2; i++)
    {
        if(isComposite(i))
        {
            if(isComposite(t-i))
            {
                cout << i << " " << t-i << endl;
                break;
            }
        }
    }
 
}
