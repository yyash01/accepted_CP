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

bool isPrime[1000008];

void sieve()
{
	int maxN = 1000000;
	isPrime[0] = isPrime[1] = true;

	for (int i = 2; i * i <= maxN; i++)
	{
		if (!isPrime[i]) //prime hai
		{
			for (int j = i * i; j <= maxN; j += i)
			{
				isPrime[j] = true;
			}
		}
	}
}
void solve()
{
	int n;
	cin >> n;
	FOR(n)
	{
		int x; cin >> x;
		int ans = sqrt(x);
		if (x == ans * ans)
		{
			if (!isPrime[ans])
			{
				cout << "YES\n";
			}
			else
			{
				cout << "NO\n";
			}
		}
		else
		{
			cout << "NO\n";
		}
	}
}
int32_t main()
{
	booster();
	sieve();
	//w(t)
	{
		solve();
	}
}


