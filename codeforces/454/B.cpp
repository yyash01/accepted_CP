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
#define MP                           make_pair
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
bool isprime (int a) { if (a <= 1) return false; if (a == 2 || a == 3) return true; if (a % 2 == 0 || a % 3 == 0) return false; for (int i = 5; i * i <= a; i = i + 6) { if (a % i == 0 || a % (i + 2) == 0) return false; } return true;}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------//
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
	bool flag = true;
	FOR(n) {
		cin >> a[i];
	}

	if (n == 2)
	{
		if (a[0] > a[1])
		{
			cout << "1\n";
		}
		else
		{
			cout << "0\n";
		}
		return;
	}
	int count = 0;
	int check = 0 ;
	bool ans = false;

	for (int i = 1; i < n; i++)
	{
		if (a[i - 1] > a[i])
		{
			count++;
			check = i;
		}
	}
	if (a[n - 1] > a[0])
	{
		count++;
		check = n;
	}
	if (count == 0)
		cout << "0";
	else if (count > 1)
		cout << "-1\n";
	else
		cout << n - check;
}
int32_t main()
{
	booster();
	//w(t)
	{
		solve();
	}
}

