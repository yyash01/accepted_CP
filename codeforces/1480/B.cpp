#include <bits/stdc++.h>
using namespace std;
const int mod =  1000000007;
const int LIM = 100005;
#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FRE freopen("iii.in","r",stdin);freopen("iii.out","w",stdout)
#define mem(a,b) memset(a,b,sizeof(a))
#define all(a) a.begin() , a.end()
#define pii pair<int,int>
#define vi vector<int>
#define endl '\n'
#define pb push_back
#define ss second
#define ff first
int power(int x, int n, int m = mod) {
	int res = 1;
	while (n) {
		if (n & 1) {
			res = res * x % m;
		}
		x = x * x % m;
		n >>= 1;
	}
	return (res % m);
}
/*bool prime[1000006];
void sieve(int n)
{
      memset(prime, true, sizeof(prime));
      int rootn = (int)sqrt(n);
      for (int p = 2; p <= rootn; p++)
            if(prime[p] == true)
                  for(int i = p*p; i <= n; i += p)
                        prime[i] = false;
      prime[1] = 0;

}*/
/*
int fac[100005];
int ncr(int n,int r)
{
      return fac[n]*((power(fac[n-r], mod-2)*power(fac[r], mod-2))%mod)%mod;
}
*/
struct s {
	int a;
	int b;
};
void booster()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int32_t main()
{
	booster();
	int tt = 1, n, k, x, y, z, i, j;
	cin >> tt;
	while (tt--) {
		cin >> x >> y >> n;
		vector <pair<int, int>> aa(n);
		for (int i = 0; i < n; i++)cin >> aa[i].ff;
		for (int i = 0; i < n; i++)cin >> aa[i].ss;
		/*  sort(aa,aa+n,[](s d, s e)->bool{
		    if(d.ff!=e.ff)
		    return d.ff<e.ff;
		    else
		    return d.ss<e.ss;
		  });*/
		sort(all(aa));
		int f = 1;
		for (i = 0; i < n; i++) {
			int fig = (aa[i].ss + x - 1) / x;
			// int cur = y - fig * aa[i].ff;
			if (y - (fig - 1)*aa[i].ff <= 0) {
				f = 0; break;
			}
			y -= fig * (aa[i].ff);
			// cout << y;
		}
		// cout << i;
		if (f)cout << "YES\n";
		else
			cout << "NO\n";
	}
}