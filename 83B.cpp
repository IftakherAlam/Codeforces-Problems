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
long long n, l = 1, r = 2e9, u, fst, mid, a[200005];
long long m, sum;
queue<long long>q;
bool is(long long x) {
   long long sm = 0;
   for (int i = 0; i < n; i++)sm += min(x, a[i]);
   return sm <= m;
}
int main()
{
   Code By Wolf


   cin>>n>>m;

   for(int i=0;i<n;i++)
   {
      cin>>a[i];
      sum+=a[i];
   }
   if(sum<m) cout<<"-1\n";

   else
   {
      while(l<=r)
      {
         mid=(l+r)/2;
         if (is(mid))l = (fst = mid) + 1;
         else r=mid-1;
      }
      for(int i=0;i<n;i++)
      {
         m-=min(fst,a[i]);
        if (a[i] = max(0ll, a[i] - fst))q.push(i);
      }
      while(m--)
      {
        if (a[q.front()] > 1)q.push(q.front());
         q.pop();
      }
      while(q.size())
      {
         cout<<q.front()+1<<" ";
         q.pop();
      }
   }

}
