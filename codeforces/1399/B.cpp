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
	int min1 = INT_MAX, min2 = INT_MAX;
	FOR(n) {
		cin >> a[i];
		min1 = min(min1, a[i]);
	} //a[i] is number of candies in ith gift
	int b[n];
	FOR(n) {
		cin >> b[i];
		min2 = min(min2, b[i]);
	} //b[i] is number of oranges in ith gift

	if (n == 1)
	{
		cout << 0 << endl;
		return;
	}

	int count = 0;

	for (int i = 0; i < n; i++)
	{
		int x1 , x2;

		x1  = abs(a[i] - min1);
		x2 = abs(b[i] - min2);


		count += min(x1, x2);
		count += abs(x2 - x1);

	}
	// cout << "FINAL" << endl;
	cout << count << endl;
}
int32_t main()
{
	booster();
	w(t)
	{
		solve();
	}
}


