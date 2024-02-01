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

    ll n;
    cin >> n;
   string s;
   cin>>s;
   if(n<3) cout<<0<<endl;

   else
   {
      int ans=0;
      for(int i=0;i<n-2;i++)
      {
         int ifx1=i,ifx2=i+1,ifx3=i+2;
         if(s[ifx1]=='x'&& s[ifx2]=='x' && s[ifx3]=='x')
         {
            ++ans;
         }

      }
      cout<<ans<<endl;
   }
}
