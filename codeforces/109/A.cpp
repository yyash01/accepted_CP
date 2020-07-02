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
	int n;cin>>n;
	int count1=0,count2=0;
	for(int i=0;n>0;i++)
	{
		if(n%7==0){
			count1++;
			n = n-7;
		}
		else if(n%4==0){
			count2++;
			n = n-4;
		}
		else{
			count1++;
			n = n-7;
		}
	}
	if(n<0)
		cout<<-1<<endl;
	else
	{
		for(int i=0;i<count2;i++)
		cout<<4;
	    for(int i=0;i<count1;i++)
		cout<<7;
	}
}

