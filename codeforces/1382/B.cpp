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

void solve()
{
	int n; cin >> n;
	int a[n];
	bool check = true; //for all elements are 1
	int count = 0;
	rep(n) {
		cin >> a[i];
		if (a[i] != 1)
			check = false;
	}
	if (n == 1) {
		cout << "First" << endl;
		return;
	}
	else if (check)
	{
		if (n % 2 == 0)
			cout << "Second" << endl;
		else
			cout << "First" << endl;

		return;
	}
	else
	{
		rep(n)
		{
			if (a[i] == 1)
			{
				count++;
			}
			else if (a[i] != 1)
			{
				break;
			}
		}
		if (count % 2 == 0)
			cout << "First" << endl;
		else
			cout << "Second" << endl;
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

