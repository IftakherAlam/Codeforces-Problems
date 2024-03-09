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
    int tt; 
    cin >> tt;
 
    while(tt--) 
    {
      int n,x;
      cin>>n>>x;
      int prev =0,ans=0;

      for(int i=0;i<n;i++)
      {
        int a;
        cin>>a;
        ans = max(ans,a-prev);
        prev=a;
      }
      ans = max(ans, 2 * (x - prev));
    cout << ans << '\n';
     
     
   }
   /*
      3,7
      1 2 5
     when a=1, ans = 1 prev=1;
     when a=2  ans = 1 prev=2;
     when a=5  ans = 4 prev=5;

     ans = max(4, 2*(7-5)) ans=4    
   */



} 
