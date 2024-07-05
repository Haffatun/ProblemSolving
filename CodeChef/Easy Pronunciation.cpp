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
        int n; cin >> n;
        string s; cin >> s;
        int cnt=0;
        for(int i=0; i<n; ++i)
        {
            if(s[i]=='a' || s[i]=='u' || s[i]=='e' || s[i]=='i' || s[i]=='o')
                cnt=0;
            else
            {
                cnt++;
                if(cnt==4)
                    break;
            }
        }
        (cnt<4)? cout << "YES\n": cout << "NO\n";
    }
    okeyBye
}
