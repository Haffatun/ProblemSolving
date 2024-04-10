#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int arr[n];
        int a=0, b=0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i]==1)
                a++;
            else if(arr[i]==2)
                b++;
        }
        ((a%2==0 && b%2==0)||(a%2==0 && a>0))? cout << "YES": cout << "NO";
        cout << endl;
    }
    cout << endl;
}
