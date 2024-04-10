#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, a, p, q, i; cin >> n;
    vector<int> v;
 
    cin >> p;
    for(i=0; i<p; i++)
    {
        cin >> a;
        v.push_back(a);
    }
 
    cin >> q;
    for(i=p; i<p+q; i++)
    {
        cin >> a;
        v.push_back(a);
    }
 
    sort(v.begin(), v.end());
    int cnt=0;
    for(i=0; i<v.size(); i++)
        if(v[i]!=v[i+1])
            cnt++;
    (n==cnt)? cout << "I become the guy.": cout << "Oh, my keyboard!";
    cout << endl;
}
