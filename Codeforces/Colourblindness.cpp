#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string str1, str2; cin >> str1 >> str2;
        int c = 0;
        for(int i=0; i<n; i++)
        {
            if((str1[i]=='R' && str2[i]!='R')||(str1[i]!='R' && str2[i]=='R'))
            {
                c++;
                break;
            }
        }
        (c==0)? cout << "YES": cout << "NO";
        cout << endl;
    }
    cout << endl;
}
