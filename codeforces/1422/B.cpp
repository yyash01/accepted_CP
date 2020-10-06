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

//mistake read question properly
//given both row and coloumn shoulb be palindrome

void solve()
{
	int n, m; cin >> n >> m;
	//arr[3] array of three elements to stroe the variables
	//three varibles which i'm gona concern
	int a[n][m];
	int ans = 0; //ans variable for addding
	//the results again and again
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int b[3];
			b[0] = a[i][j];
			b[1] = a[i][m - 1 - j];
			b[2] = a[n - 1 - i][j];
			sort(b, b + 3);
			ans += abs(b[0] - b[1]);
			ans += abs(b[1] - b[2]);
			a[i][j] = a[i][m - 1 - j] = a[n - 1 - i][j] = b[1];
		}
	}
	cout << ans << endl;
}
int32_t main()
{
	booster();
	w(t)
	{
		solve();
	}
}


