#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int b, c, h; cin >> b >> c >> h;
        (c+h < b)? cout << (c+h)*2+1: cout << b*2-1;
        cout << endl;
    }
    cout << endl;
}
