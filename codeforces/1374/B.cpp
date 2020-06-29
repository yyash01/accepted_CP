#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define int                          long long
#define mod                          1000000007  // 1e9 + 7 >>>  ans%mod
#define greator_sort(arr,n)          sort(arr, arr+n, greater<int>())  //descending order sorting of array
#define mk(arr,n,type)               type*arr = new type[n];    //to make array dynamically // n = size_of_array  |  type = int or long long etc;                      
#define w(x)                         int x;cin>>x; while(x--)   //x = test cases
#define pb                           push_back

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
	w(t)
	{
		int n;cin>>n;
		int cnt2=0,cnt3=0;
		if(n==1)
			cout<<"0"<<endl;
		else if(n%3!=0)
			cout<<"-1"<<endl;
		else
		{
			while(n%2==0)
			{
				cnt2++;
				n = n/2;
			}
			while(n%3==0)
			{
				cnt3++;
				n = n/3;
			}
			if(n>1 or cnt2>cnt3)
				cout<<"-1"<<endl;
			else
				cout<<(2*cnt3)-cnt2<<endl;
		}
	}
}

