#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define lld long double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i,n) for(int i=0;i<n;i++)
#define rl(i,m,n) for(int i=n-1;i>=m;i--)
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Wolf cout.tie(NULL);

const ll N = 1e5 + 10; 
ll a[N], n, m, sum;
vector<ll> v[N];
void solve()
{
   
    cin >> n >> m;
   for(ll i = 1; i <= m; i ++) cin >> a[i];
   if(m == 1) {
      cout << 0 << '\n';
      return;
   }
   sum = 0;
   for(ll i = 1; i <= m; i ++) {
      if(i > 1) sum += abs(a[i] - a[i - 1]); 
      if(i != 1 && a[i] != a[i-1]) v[a[i]].pb(a[i-1]);
      if(i != m && a[i] != a[i+1]) v[a[i]].pb(a[i+1]);
   }
   ll ans = sum; 
   for(ll i = 1; i <= n; i ++) {
      ll t = sum;
      if(!v[i].size()) continue;
      sort(v[i].begin(), v[i].end());
      ll mid = v[i].size() / 2;
      for(ll j = 0; j < v[i].size(); j ++) {
         t -= abs(v[i][j] - i);
         t += abs(v[i][mid] - v[i][j]);
      }
      ans = min(ans, t);
   }
   cout << ans << '\n';
}
 
int main()
{
   Code By Wolf

    solve();

} 
