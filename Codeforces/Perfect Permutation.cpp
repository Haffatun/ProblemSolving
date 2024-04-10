#include <bits/stdc++.h>
#include<string.h>
using namespace std;
 
int main()
{
    int n; cin >> n;
    if(n%2==1)
        cout << "-1";
    else
    {
        int arr[n];
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
                arr[i]=i+2;
            else arr[i]=i;
        }
        for(int i=0; i<n; i++)
            cout << arr[i] << " ";
    }
    cout << endl;
}
