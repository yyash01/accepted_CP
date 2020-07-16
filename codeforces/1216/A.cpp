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
int32_t main()
{
	c_p_c();
	int n; cin >> n;
	string s; cin >> s;
	int count = 0;
	for (int i = 0; i + 1 < n; i = i + 2)
	{
		if (s[i] == s[i + 1]) {
			count++;
			if (s[i] == 'b')
				s[i] = 'a';
			else
				s[i] = 'b';
		}
	}
	cout << count << endl;
	cout << s << endl;
}