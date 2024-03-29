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


void solve()
{
  int n;
  cin>>n;
  int a[32] = {1,
                 10,
                 11,
                 100,
                 101,
                 110,
                 111,
                 1000,
                 1001,
                 1010,
                 1011,
                 1100,
                 1101,
                 1110,
                 1111,
                 10000,
                 10001,
                 10010,
                 10011,
                 10100,
                 10101,
                 10110,
                 10111,
                 11000,
                 11001,
                 11010,
                 11011,
                 11100,
                 11101,
                 11110,
                 11111,
                 100000};

  for(int i=31;i>0;i--)
  {
    if(n%a[i]==0)
    {
      n/=a[i];
      i++;
    }
  }
  if(n==1)
  {
    cout<<"YES\n";
  }
  else
  {
    cout<<"NO\n";
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
    
      int tt;
      cin >> tt;
 
    while(tt--) {
       solve();
    }

  }
  
