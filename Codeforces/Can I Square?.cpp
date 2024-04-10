#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int arr[n];
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            sum+=arr[i];
        }
        ll r=sqrt(sum);
        (r*r==sum)? cout << "YES\n": cout << "NO\n";
    }
}
