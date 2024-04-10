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
        (pow(d*2, 2) >= pow(c, 2))? cout << pow(d*2, 2): cout << pow(c, 2);
        cout << endl;
    }
    cout << endl;
}
