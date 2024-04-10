#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int i, j, n; cin >> n;
        int c = 0;
        for (i=1; i<=n; i=i*10+1)
        {
			for (j=1; j<10; j++)
			{
				if (i*j <= n)
				{
					++c;
				}
			}
		}
        cout << c << endl;
    }
    cout << endl;
}
