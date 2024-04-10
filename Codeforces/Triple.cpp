#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        sort(arr, arr+n, greater<int>());
        int a=arr[n-1];
        int k=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==a)
            {
                k++;
            }
            else if(arr[i]!=a)
            {
                a=arr[i];
                k=1;
            }
            if(k==3)
                break;
        }
        (k==3)? cout << a: cout << "-1";
 
        cout << endl;
    }
    cout << endl;
}
