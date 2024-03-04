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
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif
    int tt; cin >> tt;
 
    while(tt--) 
    {
      int n;
      cin>>n;
      int a[n+1];
      vector<int>p(n+1,0);
      a[0]=-1;

      for(int i=1;i<=n;i++)
      {
        cin>>a[i];
      }
      for(int i=1;i<=n;i++)
      {
        p[i]=p[i-1];
        if(a[i-1]!=a[i])
        {
          p[i]=i-1;
        }
      }

      int q;
      cin>>q;

      while(q-->0)
      {
        int l,r;
        cin>>l>>r;

        if(p[r]<l)
        {
          cout<<"-1"<<" "<<"-1\n";
        }
        else
        {
          cout<<p[r]<<" "<<r<<endl;
        }
      }
    }
} 
