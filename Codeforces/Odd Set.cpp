#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int i, j, n; cin >> n;
        int arr[2*n];
        int c=0;
        for(int i=0; i<2*n; i++)
        {
            cin >> arr[i];
            if(arr[i]%2==1)
                c++;
        }
        (c==n)? cout << "YES": cout << "NO";
        cout << endl;
    }
    cout << endl;
}
