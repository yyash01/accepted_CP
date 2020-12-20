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

const int N = 2e5 + 5;
int a[N];

void solve()
{
	int n; cin >> n;
	bool check = false;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	int ans = 0;
	for (int i = 2; i <= n; i++)
	{
		ans += abs(a[i] - a[i - 1]);
	}

	int p = max(abs(a[1] - a[2]), abs(a[n] - a[n - 1]));
	for (int i = 2; i < n ; i++)
	{
		p = max(p, abs(a[i] - a[i - 1]) + abs(a[i] - a[i + 1]) - abs(a[i + 1] - a[i - 1]));
	}
	cout << ans - p << "\n";
}
int32_t main()
{
	booster();
	w(t)
	{
		solve();
	}
}


