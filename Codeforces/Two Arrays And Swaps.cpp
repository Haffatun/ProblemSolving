#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int arr1[n], arr2[n];
        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin >> arr1[i];
            sum+=arr1[i];
        }
        for(int i=0; i<n; i++)
        {
            cin >> arr2[i];
        }
        sort(arr1, arr1+n);
        sort(arr2, arr2+n, greater<int>());
        int i=0;
        while(arr1[i]<arr2[i] && i<k)
        {
            sum-=arr1[i];
            sum+=arr2[i];
            i++;
        }
 
        cout << sum << endl;
    }
    cout << endl;
}
