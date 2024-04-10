#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int arr[n], r=0;
        for(int i=0; i<n; i++)
            cin >> arr[i];
 
        int mn=*min_element(arr, arr + n);
 
        for(int i=0; i<n; i++)
            r+=(arr[i]-mn);
        cout << r << endl;
    }
    cout << endl;
}
