#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    int arr[t];
    for(int i=0; i<t; i++)
    {
        cin >> arr[i];
    }
    int mn=arr[0], mx=arr[0], cnt=0;
    for(int i=1; i<t; i++)
    {
        if(arr[i]>mx)
        {
            cnt++;
            mx=arr[i];
        }
        if(arr[i]<mn)
        {
            cnt++;
            mn=arr[i];
        }
    }
    cout << cnt << endl;
}
