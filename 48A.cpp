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
     
    
   string s1,s2,s3;
   cin>>s1>>s2>>s3;

   if(s1[0]=='p' && (s2[0]=='r' && s3[0]=='r') )
   {
      cout<<"F\n";
      return 0;
   }

   if(s2[0]=='p' && (s1[0]=='r' && s3[0]=='r') )
   {
      cout<<"M\n";
      return 0;
   }
    if(s3[0]=='p' && (s1[0]=='r' && s2[0]=='r') )
   {
      cout<<"S\n";
      return 0;
   }
    if(s1[0]=='r' && (s2[0]=='s' && s3[0]=='s') )
   {
      cout<<"F\n";
      return 0;
   }

   if(s2[0]=='r' && (s1[0]=='s' && s3[0]=='s') )
   {
      cout<<"M\n";
      return 0;
   }
    if(s3[0]=='r' && (s1[0]=='s' && s2[0]=='s') )
   {
      cout<<"S\n";
      return 0;
   }
    if(s1[0]=='s' && (s2[0]=='p' && s3[0]=='p') )
   {
      cout<<"F\n";
      return 0;
   }

   if(s2[0]=='s' && (s1[0]=='p' && s3[0]=='p') )
   {
      cout<<"M\n";
      return 0;
   }
    if(s3[0]=='s' && (s1[0]=='p' && s2[0]=='p') )
   {
      cout<<"S\n";
      return 0;
   }

   else
   {
      cout<<"?\n";
      return 0;
   }
}

