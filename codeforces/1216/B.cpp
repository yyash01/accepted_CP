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
void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

bool great_sort(const pair<int, int>&a, const pair<int, int>&b)
{
	return (a.first > b.first);
}


int32_t main()
{
	c_p_c();
	int n; cin >> n;
	int a[n];
	vector<pair<int, int>>ind;
	rep(n) {
		cin >> a[i];
		ind.pb(make_pair(a[i], i + 1));
	}
	int sum = 0;
	//a[i]==durability of cans
	sort(ind.begin(), ind.end(), great_sort);
	for (int i = 0; i < n; i++)
	{
		sum = sum + (((ind[i].first) * i) + 1);
	}
	cout << sum << endl;
	for (int i = 0; i < n; i++)
	{
		cout << ind[i].second << " ";
	}
	cout << endl;
}