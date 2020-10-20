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

int countDigit(long long n)
{
	return floor(log10(n) + 1);
}
void solve()
{
	int x; cin >> x;
	// int ld = x % 10;
	// cout << ld << endl;
	// int totald = countDigit(x);
	// cout << totald << endl;
	// int ans = ld * totald;
	int sum = 0;
	// for (int i = 1; i <= ans; i++)
	// {
	// 	if (i % 4 != 0)
	// 	{
	// 		sum += i % 4;
	// 	}
	// 	else
	// 	{
	// 		sum += 4;
	// 	}
	// }
	// cout << sum << endl;
	int arr[37] = {0, 1, 11, 111, 1111, 2, 22, 222, 2222, 3, 33, 333, 3333, 4, 44, 444, 4444, 5, 55, 555, 5555, 6, 66, 666, 6666, 7, 77, 777, 7777, 8, 88, 888, 8888, 9, 99, 999, 9999};
	for (int i = 1; i <= 36; i++)
	{
		if (arr[i] == x)
		{
			if (i % 4 != 0)
			{
				sum += i % 4;
				break;
			}
			else
			{
				sum += 4;
				break;
			}
		}
		else
		{
			if (i % 4 != 0)
			{
				sum += i % 4;
			}
			else
			{
				sum += 4;
			}
			// cout << sum << " ";
		}
	}
	cout << sum << endl;

}
int32_t main()
{
	booster();
	w(t)
	{
		solve();
	}
}


