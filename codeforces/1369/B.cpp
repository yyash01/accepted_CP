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
		string s;cin>>s;
		bool check =false;//for decreasing string
		int count1=0,count0=0;
		if(s[0]=='1')
			count1 = 0;
		for(int i=1;i<n;i++)
		{
			if(s[i-1]=='1' and s[i]=='0'){
				check = true;//yes it is a decreasing string
			}
			if(s[i]=='1' and s[0]!='1'){
				if(count1==0)
				{
					count1 = i;
				}
				else
					continue;
			}
		}
		if(check==false)
			cout<<s<<endl;
		else
		{
			for(int i=n-1;i>=0;i--){
				if(s[i]=='1')
					count0++;//trailing ones
				else
					break;
			}
			for(int i=0;i<(count1+1);i++){
				cout<<"0";
			}
			for(int i=0;i<count0;i++){
				cout<<"1";
			}
			cout<<endl;
		}
	}
}