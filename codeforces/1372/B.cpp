#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
#define int                          long long
#define mod                          1000000007  // 1e9 + 7 >>>  ans%mod
#define greator_sort(arr,n)          sort(arr, arr+n, greater<int>())  //descending order sorting of array
#define mk(arr,n,type)               type*arr = new type[n];    //to make array dynamically // n = size_of_array  |  type = int or long long etc;                      
#define w(x)                         int x;cin>>x; while(x--)   //x = test cases
#define pb                           push_back
#define rep(n)                       for(int i=0;i<n;i++)
#define make_pair                    mk
#define first                        f
#define second                       sec
void c_p_c()
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
bool isPrime(int n)
{
	// Corner cases
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;

	// This is checked so that we can skip
	// middle five numbers in below loop
	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}
void solve()
{
	int n; cin >> n;
	//a+b=n
	int temp = sqrt(n);
	int a, b, c, d, e;
	if (n % 2 == 0) //n==even
	{
		n = n / 2;
		cout << n << " " << n << endl;
	}
	else if (isPrime(n))
	{
		cout << 1 << " " << n - 1 << endl;
		return;
	}
	else
	{
		for (int i = 3; i <= temp; i++)
		{
			if (n % i == 0)
			{
				cout << n - n / i << " " << n / i << endl;
				return;
			}
		}
	}
}
int32_t main()
{
	c_p_c();
	w(t)
	{
		solve();
	}
}

