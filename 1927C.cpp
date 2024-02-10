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
   int n,m,k;
   cin>>n>>m>>k;
   vector<int >a(n),b(m);
   for(int i=0;i<n;i++) cin>>a[i];

   for(int i=0;i<m;i++) cin>>b[i];


   set<int>st1,st2;
   
   for(int i=0;i<n;i++) st1.insert(a[i]);
   for(int i=0;i<m;i++) st2.insert(b[i]);


   bool notfound=false;
   
   int cntA = 0 , cntB=0;

   for(int i=1;i<=k;i++)
   {
      if(!st1.count(i) && !st2.count(i))
      {
         notfound=true;
         break;
      }

      cntA+=st1.count(i);
      cntB+=st2.count(i);
   }
   if(notfound) cout<<"NO\n";
   else if(min(cntA,cntB)<k/2) cout<<"NO\n";
   else cout<<"YES\n";
  }
}
