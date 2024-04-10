#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define tatabybye     return 0
#define ll            long long
 
lets_start
{
 
    string s; cin >> s;
    string s5;
    int k=0;
    for(int i=0; i<5; i++)
    {
        cin >> s5;
        if (s[0]==s5[0] || s[1]==s5[1])
            k=1;
    }
 
    (k)? cout << "YES\n": cout << "NO\n";
 
    tatabybye;
}
