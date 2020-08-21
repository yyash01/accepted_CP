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
	int n, k; cin >> n >> k;
	int a[n]; FOR(n) {cin >> a[i];}
	int maxe = *max_element(a, a + n);
	FOR(n) {
		a[i] = maxe - a[i];
	}
	int b[n];
	int maxt = *max_element(a, a + n);
	FOR(n) {
		b[i] = maxt - a[i];
	}
	if (k % 2 != 0) {
		FOR(n) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	else {
		FOR(n) {
			cout << b[i] << " ";
		}
		cout << endl;
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

