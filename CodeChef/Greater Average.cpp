#include <bits/stdc++.h>
using namespace std;
#define ios           ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lets_start    int main()
#define okeyBye       return 0;
#define ll            long long
#define pf            printf
#define usi           unsigned int
#define vi            vector<int>

lets_start
{
    ios;
    int t; cin >> t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        float d=(a+b)/2.0;
        (d > c)? cout << "YES\n": cout << "NO\n";
    }
    okeyBye
}
