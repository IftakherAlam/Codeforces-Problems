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

int main()
{
   Code By Wolf
   
   int t;
   cin>>t;
   while(t--)
   {
      int n,k;
      cin>>n>>k;

      vector<int>a(n),x(n);
      for(auto& it:a)cin>>it;
      for(auto& it:x)cin>>it;

      vector<ll>s(n+1);

   for(int i=0;i<n;i++) s[abs(x[i])]+=a[i];
   bool ok =true;
   ll lft=0;
   for(int i=1;i<=n;++i)
   {
      lft +=k - s[i];
      ok &=(lft>=0);
   }
   cout<<(ok ? "YES":"NO")<<"\n";
   }
} 
