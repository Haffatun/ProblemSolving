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
        string s; cin >> s;
        int sz=s.size(), cnt=0, k=0;
        for(int i=0; i<sz-1; ++i)
            if(s[i]==s[i+1])
                ++cnt;
        if(cnt==sz-1)
            cout << "NO\n";
        else
        {
            string r=s;
            for(int i=sz/2; i<sz; ++i)
            {
                r[i]=s[k];
                ++k;
            }
            for(int i=0; i<sz/2; ++i)
            {
                r[i]=s[k];
                ++k;
            }
            if(s==r)
            {
                sort(r.begin(), r.end());
            }
            cout << "YES\n" << r << endl;
        }
 
 
 
    }
}
