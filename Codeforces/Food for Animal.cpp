#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b, c, x, y; cin >> a >> b >> c >> x >> y;
        if(a>x && b>y)
            cout << "YES" << endl;
        else if(a>x)
            (y-b <= c)? cout << "YES\n": cout << "No\n";
        else if(b>y)
            (x-a <= c)? cout << "YES\n": cout << "No\n";
        else
        (c >= (x-a)+(y-b))? cout << "YES\n": cout << "NO\n";
    }
    cout << endl;
}
