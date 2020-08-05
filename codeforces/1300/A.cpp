#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;

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
	int pro = 1, sum = 0, num_zero = 0;
	mk(a, n, int);
	FOR(n) {
		cin >> a[i];
		if (a[i] == 0) {
			pro = 0;
			num_zero++;
			a[i] = 1;
		}
		else {
			pro = pro * a[i];
			sum = sum + a[i];
		}
	}
	int steps = 0;
	if (sum != 0 and pro != 0) {
		cout << 0 << endl;
		return;
	}
	else
	{
		sum = 0;
		steps = num_zero;
		FOR(n) {
			sum += a[i];
		}
		if (sum == 0)
			steps++;

		cout << steps << endl;
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