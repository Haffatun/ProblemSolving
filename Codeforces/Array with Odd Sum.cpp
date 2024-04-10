#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int arr[n];
        int even=0, odd=0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if (arr[i]%2==0) even++;
            else odd++;
        }
        (odd==0 ||(even==0 && n%2==0))? cout << "NO\n": cout << "YES\n";
 
    }
    cout << endl;
}
