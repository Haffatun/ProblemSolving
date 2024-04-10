#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int x, y, z, a, b, c; cin >> x >> y >> z;
        if(x==y && y==z)
        {
            cout << "YES" << endl;
            cout << x << " " << y << " " << z << endl;
        }
        else if(x!=y && y!=z && z!=x)
            cout << "NO" << endl;
 
        else if(x==y)
        {
            if(x>z)
            {
                a=x;
                b=z;
                c=1;
                cout << "YES" << endl;
                cout << a << " " << b << " " << c << endl;
            }
            else
                cout << "NO" << endl;
        }
        else if(x==z)
        {
            if(x>y)
            {
                b=x;
                a=1;
                c=y;
                cout << "YES" << endl;
                cout << a << " " << b << " " << c << endl;
            }
            else
                cout << "NO" << endl;
        }
        else if(y==z)
        {
            if(y>x)
            {
                c=y;
                a=1;
                b=x;
                cout << "YES" << endl;
                cout << a << " " << b << " " << c << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
}
