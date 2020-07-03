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
		int a,b;cin>>a>>b;
		//three case (a>b) or (a<b) or (a=b)
		int count1=0;
		bool check = false,check2=false;
		int count2=0;
		if(a>b)
		{
			while(a>b)
			{
				if(a%8==0 and a/8>=b)
				{
					a = a/8;
					count1++;
				}
				else if(a%4==0 and a/4>=b)
				{
					a = a/4;
					count1++;
				}
				else if(a%2==0 and a/2>=b)
				{
					a = a/2;
					count1++;
				}
				else{
					check = true;
					break;
				}
			}
			if(check)
				cout<<-1<<endl;
			else
				cout<<count1<<endl;		
		}
		else if(a==b)
			cout<<0<<endl;
		else if(a<b)
		{
			while(a<b)
			{
				if(a*8<=b){
					a = a*8;
					count2++;
				}
				else if(a*4<=b){
					a = a*4;
					count2++;
				}
				else if(a*2<=b){
					a = a*2;
					count2++;
				}
				else{
					check2 = true;
					break;
				}
			}
			if(check2)
				cout<<-1<<endl;
			else
				cout<<count2<<endl;
		}	
	}
}

