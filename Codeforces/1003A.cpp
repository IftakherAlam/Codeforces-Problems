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

bool cmps(string s, string t)
{
   return s.size()<t.size();
}



int main() {
    Code By Wolf
  
  int n;
  cin>>n;
  map<int,int>mp;
  for(int i=0;i<n;i++)
  {
      int x;
      cin>>x;
      mp[x]++;
  }
  int mx=0;
  for(auto l:mp)
  {
   if(l.second>mx)
   {
      mx=l.second;
   }
  }

  cout<<mx<<endl;
 }
