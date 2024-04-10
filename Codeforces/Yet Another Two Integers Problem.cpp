#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll a, b, c, d, e; cin >> a >> b;
        c = (a>=b)? a : b;
        d = (b>=a)? a : b;
        e=(c-d)/10;
        ((c-d)%10 == 0)? cout << e: cout << ++e;
        cout << endl;
    }
    cout << endl;
} 
