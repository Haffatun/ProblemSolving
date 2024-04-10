#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b, n; cin >> a >> b >> n;
        int k=0, r=0;
        if(a<b)
            swap(a,b);
        while(k<=n)
        {
            k=a+b;
            b=a;
            a=k;
            r++;
        }
        cout << r << endl;
    }
}
