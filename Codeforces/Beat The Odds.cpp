#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        int i, even=0, odd=0;
        for(i=0; i<n; i++)
        {
            cin >> a[i];
            (a[i]%2 == 0)? even++: odd++;
        }
 
         cout << min(odd,even) << endl;
    }
    cout << endl;
}
