#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, i, s_n=0;
    cin >> n;
    for(i=1; i<=n; i++)
    {
        s_n+=i;
    }
    (s_n%2 == 0)? cout << "0": cout << "1";
    cout << endl;
}
//another way
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, i;
    cin >> n;
    (n%4 == 0 || n%4 == 3)? cout << "0": cout << "1";
    cout << endl;
}
