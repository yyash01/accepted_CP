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

int a[200];
int ans[200];

void solve()
{
	int n; cin >> n;
	// ans[200] = {0};
	memset(ans, 0, sizeof(ans));
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		ans[a[i]]++;
	}
	int an = 0;
	for (int i = 2; i < 2 * n + 1; i++)
	{
		int tmp = 0;
		for (int j = 1; j < (i + 1) / 2; j++)
		{
			tmp += min(ans[j] , ans[i - j]);
		}
		if (i % 2 == 0)
		{
			tmp += ans[i / 2] / 2;
		}
		if (an < tmp)
			an = tmp;
	}
	cout << an << endl;
}
int32_t main()
{
	booster();
	w(t)
	{
		solve();
	}
}


