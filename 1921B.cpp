#include <bits/stdc++.h>
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

using namespace std;

void solve()
{
   int n;
   cin>>n;
   string s,t;
   cin>>s>>t;

   int add=0,remove=0;

   for(int i=0;i<n;i++)
   {
      if(s[i]=='1' && t[i]=='0')
      {
         remove++;
      }
      if(t[i]=='1' && s[i]=='0')
      {
         add++;
      }
   }

   int ans=max(add,remove);
   cout<<ans<<endl;
}

int main() {

   Code By Wolf
    int t;
    cin >> t;

    while(t--)
    {
      solve();
    }

    return 0;
}