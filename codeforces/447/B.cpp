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
	string s; cin >> s;
	int k; cin >> k;
	map<char, int>mp;
	for (int i = 0; i < 26; i++)
	{
		int x; cin >> x;
		mp[97+i] = x;
	}
	int mx = -1;
	for (auto it : mp)
	{
		// cout << it.F << " " << it.S << "\n";
		mx = max(mx, it.S);
	}
	//ws(i) = it.S
	int sum = 0;
	for (int i = 0; i < s.size(); i++)
	{
		sum += (i + 1) * mp[s[i]];
	}
	for (int i = s.size() + 1; i <= s.size() + k; i++)
	{
		sum += i * mx;
	}
	cout << sum << "\n";
}
int32_t main()
{
	booster();
	//w(t)
	{
		solve();
	}
}


