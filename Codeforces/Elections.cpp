#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b, c, A, B, C; cin >> a >> b >> c;
        A = max(max(b,c)-a+1,0);
        B = max(max(a,c)-b+1,0);
        C = max(max(a,b)-c+1,0);
        cout<< A <<" "<< B <<" "<< C <<endl;
    }
    cout << endl;
}
