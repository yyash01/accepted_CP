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
vector<int>graph[1000000];
bool point[1000000];

void dfs(int src) {
	point[src] = true;
	for (int nbr : graph[src]) {
		if (!point[nbr]) {
			dfs(nbr);
		}
	}

}

void solve()
{
	int n, t;
	cin >> n >> t;
	//n = number of cells
	//t = index of cell
	int a[n - 1], k;
	for (int i = 1; i <= n - 1; i++) {
		cin >> k;
		graph[i].PB(i + k);
	}

	dfs(1);

	if (point[t]) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}


}
int32_t main()
{
	booster();
	//w(t)
	{
		solve();
	}
}

