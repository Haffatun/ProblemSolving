#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        sort(s.begin(), s.end(), greater<int>());
        cout << s[0]-'a'+1 << endl;
    }
    cout << endl;
}
