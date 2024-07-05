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
    int r1, r2; cin >> r1 >> r2;
    int d1, d2; cin >> d1 >> d2;

    ((r1+d1)>(r2+d2))? cout << "Dominater\n": cout << "Everule\n";
    okeyBye
}
