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
bool cmp(pair<ll,ll>a,pair<ll,ll>b)
{
   return a.first<b.first;
}

// 1 1 1 2 2 2 2 2 
//  drome 2 / 4 room

// 3 5 -> 3 8 7

int main() {
    Code By Wolf

    ll n,m;
    cin >> n>>m;

    ll a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }

    for(int i=1;i<n;i++)
    {
      a[i]+=a[i-1];
    }
    // last possible letter
    set<pair<ll,ll>>s;
    s.insert({0,0});
    for(int i=0;i<n;i++)
    {
      s.insert({a[i],i+1});

    }

    for(int i=0;i<m;i++)
    {
      ll x;
      cin>>x;
      auto itr= s.lower_bound({x,0});
      cout<<(*itr).second<<" ";
      --itr;
      cout<<x-(*itr).first<<"\n";
    }
   
}
