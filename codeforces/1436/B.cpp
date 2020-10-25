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
// vector<int>Prime;
// bool arr[1000008];

// void sieve()
// {
// 	int maxN = 1000007;

// 	// int maxN = 100000;
// 	arr[0] = arr[1] = true;

// 	for (int i = 2; i * i <= maxN; i++)
// 	{
// 		if (!arr[i])
// 		{
// 			for (int j = i * i; j <= maxN; j += i)
// 			{
// 				arr[j] = true;
// 			}
// 		}
// 	}
// 	for (int i = 2; i <= maxN; i++)
// 	{
// 		if (!arr[i])
// 		{
// 			Prime.PB(i);
// 		}
// 	}
// }

// bool ISP(int x)
// {
// 	for (int i = 0; i < Prime.size(); i++)
// 	{
// 		if (Prime[i] == x)
// 		{
// 			// cout << "PRIME" << endl;
// 			return true;
// 		}
// 	}
// 	// cout << "NOT-PRIME" << endl;
// 	return false;
// }


void solve()
{
	// int n;cin>>n;
	//all number from 1 TO 10^5.
	int x; cin >> x;
	int a[x][x];
	if (x % 2 != 0)
	{
		int y = x / 2;
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < x; j++)
			{
				if (i == j)
				{
					a[i][j] = 1;
				}
				else if (i + j == x - 1)
				{
					a[i][j] = 1;
				}
				else
				{
					a[i][j] = 0;
				}
			}
		}
		a[(x / 2) - 1][x / 2]++;
		a[(x / 2) + 1][x / 2]++;
		a[x / 2][(x / 2) - 1]++;
		a[x / 2][(x / 2) + 1]++;
	}
	else
	{
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < x; j++)
			{
				if (i == j)
				{
					a[i][j] = 1;
				}
				else if (i + j == x - 1)
				{
					a[i][j] = 1;
				}
				else
				{
					a[i][j] = 0;
				}
			}
		}
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
int32_t main()
{
	booster();
	// sieve();
	w(t)
	{
		solve();
	}
}


