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
      vector<int> ans(n);
      int o=0;
      int e=0;
      for(int i=0;i<n;i++)
      {
         cin>>ans[i];
         if(ans[i]%2==0)
         {
            e++;
         }
         else
         {
            o++;
         }
      }
      if(e!=0 && o!=0)
      {
         sort(ans.begin(),ans.end());
         for(int i=0;i<n;i++)
         {
            cout<<ans[i]<<" ";
         }
      }
      else
      {
         for(int i=0;i<n;i++)
         {
            cout<<ans[i]<<" ";
         }

      }

      
 }
