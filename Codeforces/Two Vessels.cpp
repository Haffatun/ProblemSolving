#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b, c; cin >> a >> b >> c;
        if(a<b)
            swap(a,b);
        int k=0;
        while(a>b)
        {
            b+=c;
            a-=c;
            k++;
        }
        cout << k << endl;
    }
}
