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
// bool isEqual(const pair<string, int>& a)
// {
// 	return a.F =
// }
// bool sortbysec(const pair<int,int> &a,
//               const pair<int,int> &b)
// {
//     return (a.second < b.second);
// }

void solve()
{
	int n; cin >> n;
	string s; cin >> s;
	vector<pair<string, int>> ans;
	for (int i = 0; i < n - 1; i++)
	{
		string tt = s.substr(i, 2);
		if (i == 0)
		{
			ans.PB(MP(tt, 1));
		}
		else
		{
			bool check = false;
			for (int j = 0; j < ans.size(); j++)
			{
				if (ans[j].F == tt)
				{
					check = true;
					ans[j].S++;
					break;
				}
			}
			if (!check)
			{
				ans.PB(MP(tt, 1));
			}
		}
	}
	int maxe = INT_MIN;
	for (int i = 1; i < ans.size(); i++)
	{
		if (ans[i].S < ans[i - 1].S)
		{
			swap(ans[i].S , ans[i - 1].S);
			swap(ans[i].F , ans[i - 1].F);
		}
	}
	cout << ans[ans.size() - 1].F << endl;
}
int32_t main()
{
	booster();
	//w(t)
	{
		solve();
	}
}


