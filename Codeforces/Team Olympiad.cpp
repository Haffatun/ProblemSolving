#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    vector<int> p, m, s;
    for(int i=0; i<t; i++)
    {
        int a; cin >> a;
        if(a==1) p.push_back(i);
        else if(a==2) m.push_back(i);
        else if(a==3)s.push_back(i);
    }
    int mn = min(min(p.size(),m.size()),s.size());
    cout << mn << endl;
    for(int i=0; i<mn; i++)
    {
        cout << p[i]+1 << " " << m[i]+1 << " " << s[i]+1 << endl;
    }
 
}
