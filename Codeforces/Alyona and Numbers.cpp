#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main()
{
    int x, y; cin >> x >> y;
    ll p=0;
    for(int i=1; i<=x; i++)
        p+=(y+(i%5))/5;
    cout << p << endl;
}
