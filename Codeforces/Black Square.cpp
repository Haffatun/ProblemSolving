#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d; cin >> a >> b >> c >> d;
    string str; cin >> str;
    int n = str.size();
    int sum=0;
    for(int i =0; i<n; i++)
    {
        if(str[i]=='1')
        {
            sum+=a;
        }
        if(str[i]=='2')
        {
            sum+=b;
        }
        if(str[i]=='3')
        {
            sum+=c;
        }
        if(str[i]=='4')
        {
            sum+=d;
        }
    }
    cout << sum << endl;
}
