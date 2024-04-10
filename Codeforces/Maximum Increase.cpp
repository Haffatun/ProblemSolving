#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    int k=1, mx=1;
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]<arr[i+1])
        {
            k++;
            if(k>mx)
                mx=k;
        }
 
        else k=1;
    }
    cout << mx << endl;
}
