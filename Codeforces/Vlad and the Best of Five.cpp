#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int a=0, b=0;
        for(int i=0; i<5; i++)
        {
            if(s[i]=='A')
                a++;
            else if(s[i]=='B')
                b++;
        }
        (a>b)? cout << "A\n": cout << "B\n";
    }
    cout << endl;
}
