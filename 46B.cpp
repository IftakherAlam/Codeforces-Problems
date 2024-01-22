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
     
     vector<int>v(5);

     for(int i=0;i<5;i++)
     {
      cin>>v[i];
     }

     int t;
     cin>>t;

     while(t--)
     {
      string s;
      cin>>s;
      int n=0;
      if(s=="S")
      {
         n=0;
      }
      else if(s=="M")
      {
         n=1;

      }

      if(s=="L")
      {
         n=2;
      }
      if(s=="XL")
      {
         n=3;
      }
      if(s=="XXL")
      {
         n=4;
      }
      int x=n,y=n;

      while(x>=0 && v[x]==0)
      {
         x--;
      }
      while(y<5 && v[y]==0)
      {
         y++;
      }
      if(y<5 && x>=0)
      {
         if(abs(y-n)<=abs(x-n))
         {
            n=y;
         }
         else
         {
            n=x;
         }
      }
      else if(y<5)
      {
         n=y;
      }
      else if(x>=0)
      {
         n=x;
      }
      v[n]--;

      if(n==0)
      {
         cout<<"S\n";
      }
      else if(n==1)
      {
         cout<<"M\n";
      }
      else if(n==2)
      {
         cout<<"L\n";
      }
      else if(n==3)
      {
         cout<<"XL\n";
      }
      else if(n==4)
      {
         cout<<"XXL\n";
      }
     }
  
}

