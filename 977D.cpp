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

int main ()
{
   Code By Wolf
   
   ll n ;cin>>n;
   vector<ll>v(n);

   unordered_set<ll>s;
   for(int i=0;i<n;i++)
   {
      cin>>v[i];
      s.insert(v[i]);
   }
   ll last;


    for(int i=0;i<n;i++)
   {
      if(s.find(v[i]*2)!=s.end())
      {
         continue;
      }
      if(v[i]%3==0 && s.find(v[i]/3)!=s.end())
      {
         continue;
      }
      last = v[i];
      break;
   }


  // cout<<last<<endl;

   stack<ll>myst;
   myst.push(last);
   while(myst.size()!=n)
   {
      ll val= myst.top();
      if(s.find(val*3)!=s.end())
      {
         myst.push(val*3);
      }
      else
      {
         myst.push(val/2);
      }
   }
   while(!myst.empty())
   {
      cout<<myst.top()<<" ";
      myst.pop();
   }
}
