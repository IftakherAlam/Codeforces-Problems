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
      
        int n;
        cin>>n;
        vector<int>a(n);

        for(auto &e:a) cin>>e;

        for(int i=0;i<n-2;i++)
        {
          if(a[i]<0) break;

          a[i+1] -= 2*a[i];
          a[i+2] -= a[i];
          a[i]   -= a[i]; 
        }   

        if(count(a.begin(),a.end(),0) == n)
        {
          cout<<"YES\n";

        }

        else
        {
          cout<<"NO\n";
        }


      }



} 
