#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a, b, mx=0, ind;
        for(int i=1; i<=n; i++)
        {
            cin >> a >> b;
            if(a<=10 && b>mx)
            {
                mx=b;
                ind=i;
            }
        }
        cout << ind << endl;
    }
    cout << endl;
}
