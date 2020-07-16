/*
####################################################################
####################################################################
#--------------------------------------------------------------
#--------------DARE --- TO ----- COPY ---- IT-----------------
#-----------------------PR ME KUCH NI KR SJKTA---------------
#
#
*/



#include<bits/stdc++.h>
#include<iostream>
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
int sumele(int t, vector<int>&v, int c) //c=max(c_odd,c_even)  //t=index
{
	int sum = 0;
	for (int i = t; i < c; i++)
	{
		sum = sum + v[i];
	}
	return sum;
}



int32_t main()
{
	c_p_c();
	int n; cin >> n;
	int a[n];
	std::vector<int> odd(n); int c_odd = 0;
	std::vector<int> even(n); int c_even = 0;
	rep(n) {
		cin >> a[i];
		if (a[i] % 2 == 0) //even
		{
			even.pb(a[i]); c_even++;
		}
		else {
			odd.pb(a[i]); c_odd++;
		}
	}
	sort(odd.begin(), odd.end(), greater<int>());
	sort(even.begin(), even.end(), greater<int>());
	bool check = false;
	if (c_odd == c_even)
	{
		cout << 0 << endl;
	}
	else if ((c_odd == c_even + 1) or (c_even == c_odd + 1))
	{
		cout << 0 << endl;
		check = true;
	}
	else if (c_odd > c_even and check == false) {
		int index = c_even + 1;
		cout << sumele(index, odd, c_odd) << endl;
	}
	else if (c_even > c_odd and check == false) {
		int index2 = c_odd + 1;
		cout << sumele(index2, even, c_even) << endl;
	}
}

