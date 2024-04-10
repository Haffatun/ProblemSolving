#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b, c, A, B, C, n; cin >> a >> b >> c >> n;
        int mx = max(max(a,b), max(b,c));
        A = mx - a;
        B = mx - b;
        C = mx - c;
        n-=(A+B+C);
        (n>=0 && n%3==0)? cout << "YES": cout << "NO";
        cout << endl;
    }
    cout << endl;
}
