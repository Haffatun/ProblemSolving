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
        int sum=0;
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            v.push_back(x);
            sum+=x;
        }
        if(sum==n)
            cout << "0\n";
        else if(sum>n)
        {
            cout << sum-n << endl;
        }
        else
        {
            cout << "1\n";
        }
    }
    okeyBye;
}
