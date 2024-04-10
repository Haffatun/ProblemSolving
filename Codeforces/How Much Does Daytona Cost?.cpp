#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int arr[n];
        int r=0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i]==k)
                r++;
        }
        (r>0)? cout << "YES\n": cout << "NO\n";
    }
}
