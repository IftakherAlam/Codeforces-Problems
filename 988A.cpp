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

int main() {
    Code By Wolf
    ll n,k;
    cin>>n>>k;
   unordered_map<ll,ll>m;
    for(int i=1;i<=n;i++)
    {
      int x;
      cin>>x;
      m[x]=i;
    }
    int l= m.size();
   // cout<<l<<endl;
    if(l>=k){
      int count=0;
      cout<<"YES\n";

    for(auto t:m)
    {
      cout<<t.second<<" ";
      count++;
      if(count==k)
      {
         break;
      }
    }
 }
 else
 {
   cout<<"NO\n";
 }

}
