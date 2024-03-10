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
      
        int a,b;
        cin>>a>>b;

        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        set<pair<int,int>>str1,str2;

        for(int j=0;j<4;j++)
        {
          str1.insert({x1+dx[j]*a,y1+dy[j]*b});
          str2.insert({x2+dx[j]*a,y2+dy[j]*b});
          str1.insert({x1+dx[j]*b,y1+dy[j]*a});
          str2.insert({x2+dx[j]*b,y2+dy[j]*a});
        }
        int ans=0;
        for(auto x:str1)
        {
          if(str2.find(x)!=str2.end())
          {
            ans++;
          }
        }
        cout<<ans<<endl;
      }



} 
