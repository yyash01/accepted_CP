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
//to set precission values ----- upto 10^-n// cout<<fixed<<setprecision(n)<<x<<" ";
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
	int n, l;
	cin >> n >> l;
	double a[n];
	FOR(n)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	double ans = 0;
	//case1 from left lantern
	ans = max(ans, a[0]);
	//case 2 frm right lantern
	ans = max(ans, l - a[n - 1]);

	for (int i = 0; i < n - 1; i++)
	{
		double di = a[i + 1] - a[i];
		di = di / 2.00;
		ans = max(ans, di);
	}
	cout << fixed << setprecision(9) << ans << " ";
}
int32_t main()
{
	booster();
	//w(t)
	{
		solve();
	}
}


