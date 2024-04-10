#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, a, b; cin >> n;
        if(n%3==0)
        {
            a = n/3;
            b = a;
        }
        else if(n%3==1)
        {
            a = n/3+1;
            b = a-1;
        }
        else if(n%3==2)
        {
            a = n/3;
            b = a+1;
        }
        cout << a << " " << b << endl;
    }
    cout << endl;
}
