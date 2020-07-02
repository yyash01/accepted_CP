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
	string first[10] = {"","one","two", "three", "four", "five", "six", "seven", "eight","nine"};
	string sec[10] = {"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

	int x = n/10, y = n%10;
	if(n==0){
		cout<<"zero"<<endl;
	}  
	else if(n==10){
		cout<<"ten"<<endl;
	}
	else if(n==11){
		cout<<"eleven"<<endl;
	}
	else if(n==12)
		cout<<"twelve"<<endl;
	else if(n==13)
		cout<<"thirteen"<<endl;
	else if(n==14)
		cout<<"fourteen"<<endl;
	else if(n==15)
		cout<<"fifteen"<<endl;
	else if(n==16)
		cout<<"sixteen"<<endl;
	else if(n==17)
		cout<<"seventeen"<<endl;
	else if(n==18)
		cout<<"eighteen"<<endl;
	else if(n==19)
		cout<<"nineteen"<<endl;
	else
	{
		if(!x)
			cout<<first[y]<<endl;
		else if(!y)
			cout<<sec[x]<<endl;
		else
			cout<<sec[x]<<"-"<<first[y]<<endl;
	}
}

