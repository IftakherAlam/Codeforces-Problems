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
   
   string s;
   cin>>s;

   vector<int>v;

   for(int i=0;i<s.size();i++)
   {
      if(s[i]=='.')
      {
         v.push_back(0);
      }
     else if(s[i]=='-' && s[i+1]=='.')
      {
         v.push_back(1);
         i++;
      }
      else if(s[i]=='-' && s[i+1]=='-')
      {
         v.push_back(2);
         i++;
      }

   }
   for(auto x:v)
   {
      cout<<x;
   }
}



