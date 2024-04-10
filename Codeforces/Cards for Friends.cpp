#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int w, h, n; cin >> w >> h >> n;
        int k=1, i=0, j=0;
        while(k<n)
        {
            if((w%2==1 && h%2==1)||(k>=n))
                break;
            if(w%2==0)
            {
                w/=2;
                k*=2;;
            }
            if(h%2==0)
            {
                h/=2;
                k*=2;
            }
        }
 
        (k>=n)? cout << "YES": cout << "NO";
        cout << endl;
    }
    cout << endl;
}
