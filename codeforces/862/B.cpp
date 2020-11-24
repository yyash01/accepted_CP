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

vi adj[100001];
int visited[100001] = {0};
int color[100001] = {0};




void dfs(int node , int c)
{
	visited[node] = 1;
	color[node] = c;
	for (auto nbr : adj[node])
	{
		if (visited[nbr] == 0)
		{
			dfs(nbr, 3 - c);
		}
	}
}


int32_t main()
{
	booster();
	//w(t)
	int n; cin >> n;
	int a = 0; //1
	int b = 0; //2
	for (int i = 1; i <= n - 1; i++)
	{
		int u, v;
		cin >> u >> v;
		adj[u].PB(v);
		adj[v].PB(u);
	}

	dfs(1, 1);

	for (int i = 1; i <= n; i++)
	{
		if (color[i] == 1)
		{
			a++;
		}
		else
		{
			b++;
		}
	}

	int k = (a) * (b);
	cout << k - (n - 1) << "\n";
}


