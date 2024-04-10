#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string str; cin >> str;
        int b1=0, b2=1;
        sort(str.begin(), str.end());
        for(int i=0; i<n-1; i++)
        {
            if(str[i]!=str[i+1])
            b2++;
            else b1++;
        }
        cout << b1+b2*2 << endl;
    }
    cout << endl;
}
