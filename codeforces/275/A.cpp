#include <bits/stdc++.h>
#include<cmath>
using namespace std;
typedef long long int l1;
typedef vector <int> vi;
typedef vector <long long int> v1;
#define pb push_back
#define iter(i,a,b) for(i=a;i<b;i++)
int main()
{
    ios_base::sync_with_stdio(false);      //for fast cin and cout streams
    cin.tie(NULL);
    cout.tie(NULL);
    int test=1;
    while(test--)
{
   int p[3][3];
   
   int i,j;
   
   iter(i,0,3)
   {
       iter(j,0,3)
       p[i][j]=0;
   }
    
    int a[3][3];
    for( i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            cin>>a[i][j];
            p[i][j]+=a[i][j];
            
            if(i>0)
            p[i-1][j]+=a[i][j];
            
            if(j>0)
            p[i][j-1]+=a[i][j];
            
            if(i<2)
            p[i+1][j]+=a[i][j];
            
            if(j<2)
            p[i][j+1]+=a[i][j];
        }
    }
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(p[i][j]&1)
            cout<<0;
            else
            cout<<1;
        }
        cout<<"\n";
    }	
 
 
	
 
}
 
return 0;
}