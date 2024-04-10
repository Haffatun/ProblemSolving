#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        string str; cin >> str;
        if((str[0]=='b' && str[1]=='c')||(str[0]=='c' && str[1]=='a'))
        cout << "NO" << endl;
        else
        cout << "YES" << endl;
    }
    cout << endl;
}
