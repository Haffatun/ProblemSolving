#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int r, b, d, a, e, k;
        cin >> r >> b >> d;
        a = (r >= b)? r: b;
        e = (b >= r)? r: b;
        k = (a+e-1)/e;
        if(k-1 <= d)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    cout << endl;
}
