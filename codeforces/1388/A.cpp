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
#define MP                           make_pair
#define vi                           vector<int>
#define pii                          pair<int,int>
#define mii                          map<int,int>
#define FOR(c)                       c.begin() , c.end()
#define gcd(a,b)                     __gcd(a,b)
#define lcm(a,b)                     (a*b)/gcd(a,b)
//--------------------------------------------------------------------------------------------------------------------------------------------//
#define F                            first
#define S                            second
//------------------------------------------------------------------------------------------------------------------------------------------------//
#define rep(n)                       for(int i=0;i<n;i++)
#define repd(n)                      for(int i=n-1;i>=0;i--)
//---------------------------------------------------------------------------------------------------------------------------------------//

void booster()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

/*
1st.COMMENT
------------SORTING IN DESCENDING ORDER FOR VECTOR PAIR------------
-----------ACCORDING TO FIRST ELEMENT IN PAIR---------------------

bool great_sort(const pair<int, int>&a, const pair<int, int>&b)
{
	return (a.first > b.first);
}

------------------------------------------------------------------
--------------------------------------------------------------------
*/

void solve()
{
	int n; cin >> n; //number of flint guessed

	// prime number = 2,3,5,7,11,13,17,19,23,29,31...

	//nearly prime = 6 ,10 ,14 ,22 ,26 ,34 ,38 ,46 ,58......
	if (n <= 30) {
		cout << "NO" << endl;
		return;
	}
	else {
		cout << "YES" << endl;
		if (n == 36 or n == 40 or n == 44)
		{
			cout << 6 << " " << 10 << " " << 15 << " " << n - 31 << endl;
		}
		else {
			cout << 6 << " " << 10 << " " << 14 << " " << n - 30 << endl;
		}
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
