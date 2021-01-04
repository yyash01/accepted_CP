#include <bits/stdc++.h>
using namespace std;
typedef long long unsigned int ll;
 
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t = 1;
    cin >> t;
 
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
 
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
 
        sort(arr.begin(), arr.end(), greater<int>());
 
        ll a = 0, b = 0;
 
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (arr[i] % 2 == 0)
                    a += arr[i];
            }
            else
            {
                if (arr[i] % 2 == 1)
                    b += arr[i];
            }
        }
 
        if (a > b)
            cout << "Alice";
        else if (a < b)
            cout << "Bob";
        else
            cout << "Tie";
        cout << endl;
    }
    return 0;
}