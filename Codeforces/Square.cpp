#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b; cin >> a >> b;
        int c, d; cin >> c >> d;
        int e, f; cin >> e >> f;
        int g, h; cin >> g >> h;
        if(a!=c)
        {
            unsigned int x=a-c;
            cout << x*x << endl;
        }
        else if(a!=e)
        {
            unsigned int x=a-e;
            cout << x*x << endl;
        }
        else if(a!=g)
        {
            unsigned int x=a-g;
            cout << x*x << endl;
        }
    }
    cout << endl;
}
