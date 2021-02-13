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
	FOR(n)
	{
		cin >> a[i];
	}
	int start = -1;
	int end = n - 1;
	bool flag = true;

	for (int i = 1; i < n; i++)
	{
		if (flag)
		{
			if (a[i] < a[i - 1])
			{
				flag = false;
				start = i - 1;
			}
		}
		else
		{
			if (a[i] > a[i - 1])
			{
				end = i - 1;
				break;
			}
		}
	}
	if (start != -1)
	{
		reverse(a + start, a + end + 1);
		for (int i = 1; i < n; i++)
		{
			if (a[i] < a[i - 1])
			{
				flag = false;
				break;
			}
			else
			{
				flag = true;
			}
		}
	}
	if (flag)
	{
		cout << "yes\n";
		if (start == -1)
		{
			cout << "1 1\n";
		}
		else
			cout << start + 1 << " " << end + 1 << "\n";
	}
	else
	{
		cout << "no\n";
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


