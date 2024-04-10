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
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
 
        sort(arr, arr+n);
        arr[0]+=1;
        ll c=1;
        for(int i=0; i<n; i++)
            c*=arr[i];
        cout << c << endl;
    }
    cout << endl;
}
