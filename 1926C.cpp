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

const int N = 2e5 +1;
int g(int x)
{
   int res=0;
   while(x)
   {
      res +=x%10;
      x/=10;
   }
   return res;
}
int main()
{
   Code By Wolf

   vector<int>v(N);

   for(int i=1;i<N;i++)
   {
      v[i]=v[i-1]+g(i);
   }
   int t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
     cout<<v[n]<<"\n"; 
   }
   

} 
