#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define okeyBye       return 0
#define ll            long long
#define p             printf
 
lets_start
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        if((n+1)%3==0)
            cout << "First\n";
        else if((n-1)%3==0)
            cout << "First\n";
        else cout << "Second\n";
    }
    okeyBye;
}
