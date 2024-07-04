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
        int x, y; cin >> x >> y;
        if(y<x)
            swap(x, y);
        cout << x << " " << y << endl;
    }
}
