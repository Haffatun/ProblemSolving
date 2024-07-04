#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define okeyBye       return 0;
#define ll            long long
#define p             printf
#define usi           unsigned int
#define vi            vector<int>
#define q             queue<int>
 
lets_start
{
    int n; cin >> n;
    while(n--)
    {
        string a, b; cin >> a >> b;
        swap(a[0], b[0]);
        cout << a << " " << b << endl;
    }
 
    okeyBye
}
