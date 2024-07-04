#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define okeyBye       return 0;
#define ll            long long
#define p             printf
#define usi           unsigned int
#define vi            vector<int>
 
lets_start
{
    int t; cin >> t;
    while(t--)
    {
        int a, b, c, d; cin >> a >> b >> c >> d;
        if(a>b)
            swap(a,b);
        if(c>a && c<b && d>a && d<b)
            cout << "NO\n";
        else if(c>a && c<b)
            cout << "YES\n";
        else if(d>a && d<b)
            cout << "YES\n";
        else
            cout << "NO\n";
        
    }
}
