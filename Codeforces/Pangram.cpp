#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n; cin >> n;
    string s; cin >> s;
    for(auto& x:s)
    {
        x = tolower(x);
    }
    sort(s.begin(), s.end());
 
 
    int k=1;
    for(int i=0; i<n-1; i++)
    {
 
        if(s[i]!=s[i+1])
            k++;
    }
    (k==26)? cout << "YES\n": cout << "NO\n";
}
