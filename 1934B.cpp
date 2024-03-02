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
int Getans(int n)
{
  ll ans=0;
  ans+=n/15;
  n%=15;
  ans+=n/6;
  n%=6;
  ans+=n/3;
  n%=3;
  ans +=n;
  return ans;
}

void solve()
{
  int n;
  cin>>n;
  if(n<10)
  {
    cout<<Getans(n)<<endl;
  }
  else if(n<20)
  {
    cout<<min(Getans(n),Getans(n-10)+1)<<endl;
  }
  else
  {
    cout<<min({Getans(n),Getans(n-10)+1,Getans(n-20)+2})<<endl;
  }
}
int main()
{
   Code By Wolf
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif
     int t;
     cin>>t;
     while(t--)
     {
      solve();

     }
} 
