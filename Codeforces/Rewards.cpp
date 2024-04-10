#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a1, a2, a3, b1, b2, b3, n, a, b;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> n;
    a = ((a1+a2+a3)%5 == 0)? (a1+a2+a3)/5: (a1+a2+a3)/5 + 1;
    b = ((b1+b2+b3)%10 == 0)? (b1+b2+b3)/10: (b1+b2+b3)/10 + 1;
    (a+b <= n)? cout << "YES": cout << "NO";
    cout << endl;
}
