#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int arr[2*n];
        for(int i=0; i<2*n; i++)
            cin >> arr[i];
        int a[n];
        a[0]=arr[0];
        int r=1;
        for(int i=1; i<2*n; i++)
        {
            int m=0;
            for(int j=0; j<i; j++)
            {
                if(arr[i]!=arr[j])
                   m++;
            }
            if(m==i)
            {
                a[r]=arr[i];
                r++;
            }
        }
        for(int i=0; i<n-1; i++)
            cout << a[i] << " ";
        cout <<  a[n-1] << endl;
    }
}
