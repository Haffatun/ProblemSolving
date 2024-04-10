#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define okeyBye       return 0
#define ll            long long
#define p             printf
#define usi           unsigned int
#define vi            vector<int>
lets_start
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vi v;
        int mx=0, k;
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            v.push_back(x);
            if(mx<x)
            {
                mx=x;
                k=i;
            }
        }
        int mx2=0;
        for(int i=0; i<n; i++)
        {
            if(mx2<v[i] && i!=k)
                mx2=v[i];
        }
        for(int i=0; i<n; i++)
        {
            if(v[i]==mx)
                cout << mx-mx2 << " ";
            else
                cout << v[i]-mx << " ";
        }
        cout << endl;
 
    }
    okeyBye;
}
