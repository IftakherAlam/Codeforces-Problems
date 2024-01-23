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
     
    int x,y;
    cin>>x>>y;
    int s= (x*x+y*y);
    int d= sqrt(s);
      
      if(d*d==s)
      {
         cout<<"black\n";
         return 0;
      }

      if((x>0 && y>0)|| (x<0 && y<0))
      {
         if(d%2==0)
         {
            cout<<"black\n";
         }
         else
         {
            cout<<"white\n";
         }
         return 0;
      }
      if(d%2==0)
      {
         cout<<"white\n";
      }
      else
      {
         cout<<"black\n";
      }
    

}

