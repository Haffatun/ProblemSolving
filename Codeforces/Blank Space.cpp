#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int i, j, n; cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
 
        int c=0, d=0;
        for(int i=0; i<=n; i++)
        {
            if(arr[i]==0)
            {
                c++;
            }
            if(arr[i]==1)
            {
                if(c>d)
                {
                    d=c;
                    c=0;
                }
                else c=0;
            }
        }
        if(c>d)
            d=c;
        cout << d << endl;
    }
    cout << endl;
}
