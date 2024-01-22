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




int main ()
{
   Code By Wolf
     
    
    int t;
    cin>>t;
    while(t--)
    {
      string s;
      cin>>s;

      int a= s[0]-'0';
      int b=s[1]-'0';
      int c=s[2]-'0';
      int d=s[3]-'0';

      if(a==0)
      {
         a=10;
      }
       if(b==0)
      {
         b=10;
      }
       if(c==0)
      {
         c=10;
      }
       if(d==0)
      {
         d=10;
      }
      int ans=4 +abs(a-1)+ abs(b-a)+abs(c-b)+abs(d-c);
      cout<<ans<<endl;
    }
  
}

