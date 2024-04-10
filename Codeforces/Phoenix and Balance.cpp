#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int arr[n];
        arr[0]=2;
        for(int i=1; i<n; i++)
            arr[i]=arr[i-1]*2;
        cout << arr[n/2]-arr[0] << endl;
    }
}
