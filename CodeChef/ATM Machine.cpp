#include <bits/stdc++.h>
using namespace std;
#define ios           ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lets_start    int main()
#define okeyBye       return 0;
#define ll            long long
#define pf            printf
#define usi           unsigned int
#define vi            vector<int>

lets_start
{
    ios;
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int arr[n];
        int cnt=0;
        for(int i=0; i<n; ++i)
            cin >> arr[i];
        for(int i=0; i<n; ++i)
        {
            if(arr[i]<=k)
            {
                cnt++;
                k-=arr[i];
                cout << "1";
            }
            else
                cout << "0";
        }
        cout << endl;
    }
    okeyBye
}
