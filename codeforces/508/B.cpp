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
	int n = s.size();
	int smalleven = 2;
	bool check = false, flag = false;
	for (int i = 0; i < s.size(); i++)
	{
		// cout << s[i] << " ";
		int x = (s[i] - '0');
		if (x % 2 == 0)
		{
			check = true;
			if (s[i] < s[n - 1])
			{
				swap(s[i], s[n - 1]);
				flag = true;
				break;
			}
		}
	}//smalleven > odd  //smalleven < odd
	if (!flag)
	{
		for (int i = n - 1; i >= 0; i--)
		{
			if ((s[i] - '0') % 2 == 0)
			{
				if (s[i] > s[n - 1])
				{
					swap(s[i], s[n - 1]);
					flag = true;
					break;
				}
			}
		}
	}
	if (check)
	{
		for (int i = 0; i < n; i++)
		{
			cout << s[i];
		}
		cout << "\n";
	}
	else
	{
		cout << "-1\n";
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


