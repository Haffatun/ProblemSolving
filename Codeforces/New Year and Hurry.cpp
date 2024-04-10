#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, k, i=1;
    cin >> n >> k;
    int sT = 0, cnt=0;
    while((k+(sT+=(i*5))) <= 240 && i<=n)
    {
        i++;
    }
    cout << i-1 << endl;
}
