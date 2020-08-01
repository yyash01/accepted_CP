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
#define MP                          make_pair
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
	int n; cin >> n;
	string s; cin >> s;
	int count = 0;
	// W -> B
	//B -> W
	int white = 0, black = 0;
	vi v ;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'W')
			white++;
		else
			black++;
	}
	if (white == 0 or black == 0) {
		cout << 0 << endl;
	}
	else if (white % 2 != 0 and black % 2 != 0) {
		cout << "-1" << endl;
	}
	else {
		for ( int i = 0 ; i < n - 1 ; i++ )
		{
			if ( s[i] == 'W' )
				continue ;
			else
			{
				v.push_back(i + 1) ;
				count++;
				s[i] = 'W' ;
				if ( s[i + 1] == 'B' )
					s[i + 1] = 'W' ;
				else s[i + 1] = 'B' ;
			}
		}
		if ( s[n - 1] == 'B' )
		{
			for ( int i = n - 2 ; i > 0 ; i-- )
			{
				if ( s[i] == 'B' )
					continue ;
				else
				{
					v.push_back(i) ;
					count++;
					s[i] = 'B' ;
					if ( s[i - 1] == 'B' )
						s[i - 1] = 'W' ;
					else s[i - 1] = 'B' ;
				}
			}
			if (s[0] == 'W' )
			{
				cout << "-1\n" ;
				return;
			}
		}
		cout << count << endl;
		for (auto it = v.begin(); it != v.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
}
int32_t main()
{
	booster();
	//w(t)
	{
		solve();
	}
}
