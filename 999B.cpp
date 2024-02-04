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

// s=codeforces
// n=10
// div=10,5,2,1
// rev=1 10
// rev=1 5
// rev=1 2
// rev= 1 1
// s=rocesfedoc
// rev = 1 1 rocesfedoc
// rev = 1 2 orcesfedoc
// rev = 1 5 secrofedoc
// rev = 1 10 codeforces 


int main() {
    Code By Wolf
   int n;
   cin>>n;
   string s;
   cin>>s;

   set<int>div;
   
   for(int i=1; i*i<=n;++i)
   {
      if(n%i==0)
      {
         div.insert(i);
         div.insert(n/i);
      }
   }
   auto itr=div.begin();
   while(itr != div.end())
   {
      int len= *itr;
      reverse(s.begin(),s.begin()+len);
      ++itr;
   }
   cout<<s;
   
   
 }
