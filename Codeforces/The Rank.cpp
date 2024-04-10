#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, i; cin >> t;
    int arr[t];
    for(i=0; i<t; i++)
    {
        int a, b, c, d; cin >> a >> b >> c >> d;
        int sum = a+b+c+d;
        arr[i]=sum;
    }
    int Thomas = arr[0];
    sort(arr, arr + t, greater<int>());
    for(i=0; i<t; i++)
    {
        if(arr[i]==Thomas)
            break;
    }
    cout << i+1 << endl;
}
