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

int dx[4]={-1,1,-1,1},dy[4]={-1,-1,1,1};

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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,int>m;

        for(auto i:s) m[i]++;

        int c=0;

      for(auto i:m)
      {
        if(i.second%2!=0) c++;
      }

      if(c<=k+1) cout<<"YES\n";
      else cout<<"NO\n";
      }
  }
