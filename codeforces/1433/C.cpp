#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;


#define inf                          (long long) 1e18
#define int                          long long
#define mod                          1000000007  // 1e9 + 7 >>>  ans%mod
#define greator_sort(arr,n)          sort(arr, arr+n, greater<int>())  //descending order sorting of array
#define mk(arr,n,type)               type*arr = new type[n];    //to make array dynamically // n = size_of_array  |  type = int or long long etc;                      
#define w(x)                         int x;cin>>x; while(x--)   //x = test cases
//---------------------------------------------------------------------------------------------------------------------------------------------------------//
#define PB                           push_back
#define MP                          make_pair
#define vi                           vector<int>
#define pii                          pair<int,int>
#define mii                          map<int,int>
#define rep(c)                       c.begin() , c.end()
#define gcd(a,b)                     __gcd(a,b)
#define lcm(a,b)                     (a*b)/gcd(a,b)
//--------------------------------------------------------------------------------------------------------------------------------------------//
#define F                            first
#define S                            second
//------------------------------------------------------------------------------------------------------------------------------------------------//
#define FOR(n)                       for(int i=0;i<n;i++) //increasing for loop
#define FORD(n)                      for(int i=n-1;i>=0;i--) //decreasing for loop
//---------------------------------------------------------------------------------------------------------------------------------------//

void booster()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


void solve()
{
	int n; cin >> n;
	int a[n];
	int maxe = INT_MIN;
	int tmp = 0;
	FOR(n) {
		cin >> a[i];
		maxe = max(a[i], maxe);
	}
	int result = *min_element(a, a + n);
	int ans = -1;

	//a[i] is size of ith pirana
	// if (a[tmp] > result and tmp > 0 and tmp + 1 < n)
	// {
	// 	cout << tmp + 1 << endl;
	// 	return;
	// }
	// if (a[tmp] > result and tmp + 1 < n)
	// {
	// 	cout << tmp + 1 << endl;
	// 	return;
	// }
	// else
	// {
	// 	cout << -1 << endl;
	// 	return;
	// }
	for (int i = 0; i < n; i++)
	{
		if (a[i] == maxe)
		{
			if (i == 0)
			{
				if (a[i + 1] < maxe)
				{
					ans = i;
					break;
				}
			}
			else if (i == n - 1)
			{
				if (a[i - 1] < maxe)
				{
					ans = i;
					break;
				}
			}
			else
			{
				if (a[i + 1] < maxe or a[i - 1] < maxe)
				{
					ans = i;
					break;
				}
			}
		}
	}
	if (ans == -1)
	{
		cout << ans << endl;
		return;
	}
	else
	{
		cout << ans + 1 << endl;
		return;
	}

}
int32_t main()
{
	booster();
	w(t)
	{
		solve();
	}
}


