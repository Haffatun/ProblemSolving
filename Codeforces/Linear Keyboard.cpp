#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define okeyBye       return 0
#define ll            long long
#define p             printf
#define usi           unsigned int
 
lets_start
{
    int t; cin >> t;
    while(t--)
    {
        string str; cin >> str;
        string s; cin >> s;
        int k=0;
        for(int i=1; i<s.size(); i++)
        {
            int p=str.find(s[i-1]);
            int n=str.find(s[i]);
            k+=abs(n-p);
        }
        cout << k << endl;
    }
    okeyBye;
}
