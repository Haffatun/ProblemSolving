#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string str; cin >> str;
        sort(str.begin(), str.end());
        (str == "Timru")? cout << "YES": cout << "NO";
        cout << endl;
    }
    cout << endl;
}
