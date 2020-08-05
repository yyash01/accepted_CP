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

//initially robot ->(0,0)
//movement of Robot - 'U'=> y increases
// 'R' => x increases

//minimum possible number of moves to collect n packages
//lexicographically smallest path

/*Answer->
strcmp() is a built-in library function and is declared
in <string.h> header file. This function takes two strings as arguments
and compare these two strings lexicographically.
*/



void solve()
{
	int n; cin >> n;//number of packages
	vector<pair<int, int>> points(n);
	for (int i = 0; i < n; i++)
	{
		cin >> points[i].F >> points[i].S;
	}
	sort(rep(points));//phele 'R' aa jayenge
	bool check = false;
	string ans = "";
	pii origin = MP(0, 0);
	FOR(n)
	{
		if ((points[i].S < points[i - 1].S ) and (i != 0)) {
			check = true;
			break;
		}
		else
		{
			int r = points[i].F - origin.F;
			int u = points[i].S - origin.S;

			while (r--)
			{
				ans += 'R';
			}
			while (u--)
			{
				ans += 'U';
			}
			origin = points[i];
		}
	}
	if (check) {
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl;
		cout << ans << endl;
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

